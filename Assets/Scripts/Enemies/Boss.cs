using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public struct Attack
{
    public string name;
    public float damage;
    public float force;
    public Transform pos;
    public float distanceToAttack;
    public float attackRange;
    public float countdown;
    public float countdownTimer;
}

public class Boss : MonoBehaviour
{
    public GameObject _Player;
    public PlayerBehaviour playerBehavior;
    public IsPlayerDead isPLayerDeadScript;
    public LayerMask whoIsPlayer;
    public PlayerDamageSound playerDamageType;
    private EnemyHealth myHealth;

    [Header("Movement :")]
    public float speed;
    public float changePosCountdownMin, changePosCountdownMax;
    public float changePosCountdownTimer;
    public Transform wholeBody;
    [SerializeField] Transform posLeft;
    [SerializeField] Transform posMiddle;
    [SerializeField] Transform posRight;
    [SerializeField] Transform startPos;
    Vector2 targetPos;

    public bool isMoving;
    public bool goingRight;
    public bool lookingRight;

    [Header("Attack :")]
    public float attackCountdown;
    public float attackCountdownTimer;
    public Attack[] attackList;

    [Header("Effects")]
    public ParticleSystem takingDamageParticle;

    private Animator anim;
    public bool vulnerable;
    public Transform myTransform;
    public bool movedToPlayer;
    public bool enraged;
    private float halfHealth;

    [SerializeField] AudioSource levelMusicAS;

    void Start()
    {
        myTransform = transform;
        vulnerable = false;
        playerDamageType = PlayerDamageSound.Heavy_Hit;

        _Player = GameObject.FindGameObjectWithTag("Player");
        playerBehavior = _Player.GetComponent<PlayerBehaviour>();
        anim = GetComponent<Animator>();
        myHealth = GetComponent<EnemyHealth>();

        for (int i = 0; i < attackList.Length; i++)
        {
            attackList[i].countdownTimer = attackList[i].countdown;
        }
        isPLayerDeadScript = GetComponent<IsPlayerDead>();

        changePosCountdownTimer = UnityEngine.Random.Range(changePosCountdownMin, changePosCountdownMax);
        attackCountdownTimer = attackCountdown;

        myTransform.position = startPos.position;
        targetPos = myTransform.position;
        isMoving = false;
        movedToPlayer = false;
        enraged = false;
        halfHealth = myHealth.Health * 0.5f;
    }

    void Update()
    {        
        //ResetAttack I forgot to use
        //for (int i = 0; i < attackList.Length; i++)
        //{
        //    if (attackList[i].countdownTimer> 0)
        //    {
        //        attackList[i].countdownTimer -= Time.deltaTime;
        //    }
        //}

        if (myHealth.Health <= halfHealth && !enraged)
        {
            enraged = true;
            anim.SetTrigger("Enraged");
        }
    }

    public void CheckPlayersLocation()
    {
        if (_Player.gameObject.transform.position.x <= transform.position.x)
        {
            wholeBody.localScale = new Vector3(1, 1, 1);
            lookingRight = true;
        }
        else
        {
            wholeBody.localScale = new Vector3(-1, 1, 1);
            lookingRight = false;
        }
    }

    public void TakeDamage() //Maybe rewrite it in bosses' behaviors
    {
        anim.SetTrigger("Hurt");
        Instantiate(takingDamageParticle, transform);
    }   

    public void Die()
    {
        speed = 0;
        anim.SetTrigger("Die");
        TimeManager.Instance.DoSlowEffect(2.5f);
    }

    public void AnimationDestroy()
    {
        FindObjectOfType<BossFightManager>().SetFightStage(BossFightManager.FightStage.End);       
        Destroy(gameObject);
    }

    public void IsVulnerable()
    {
        vulnerable = true;
    }

    public void IsNotVulnerable()
    {
        vulnerable = false;
    }

    public void Move()
    {
        if (changePosCountdownTimer <= 0)
        {
            int r = UnityEngine.Random.Range(0, 2);
           
                if (targetPos == (Vector2)posRight.position)
                {
                    if (r == 0)
                        targetPos = posMiddle.position;
                    else
                        targetPos = posLeft.position;                   
                }
                else if (targetPos == (Vector2)posLeft.position)
                {
                    if (r == 0)
                        targetPos = posMiddle.position;
                    else
                        targetPos = posRight.position;
                }
                else
                {
                    if (r == 0)
                    {
                        targetPos = posLeft.position;
                    }
                    else
                    {
                        targetPos = posRight.position;
                    }                       
            }
            goingRight = myTransform.position.x <= targetPos.x ? true : false;
            changePosCountdownTimer = UnityEngine.Random.Range(changePosCountdownMin, changePosCountdownMax);
            movedToPlayer = false;
        }
        else if ((Vector2)myTransform.position != targetPos && !movedToPlayer)
        {
            myTransform.position = Vector2.MoveTowards(myTransform.position, targetPos, speed * Time.deltaTime);
            isMoving = true;
        }
        else
        {
            changePosCountdownTimer -= Time.deltaTime;
            isMoving = false;
        }
        attackCountdownTimer -= Time.deltaTime;
    }

    public void ZoomOutFromBoss()
    {
        CameraShaker.Instance.ZoomOutOnly(0.35f);
    }

    public void PlayBossFightMusic()
    {
        levelMusicAS.Play();
    }

    public void StopBossFightMusic()
    {
        levelMusicAS.Stop();
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        for (int i = 0; i < attackList.Length; i++)
            Gizmos.DrawWireSphere((Vector2)attackList[i].pos.position, attackList[i].attackRange);
    }
}
