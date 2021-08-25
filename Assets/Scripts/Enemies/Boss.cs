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

    [Header("Movement :")]
    public float speed;
    public float changePosCountdownMin, changePosCountdownMax;
    public float changePosCountdownTimer;
    public Transform wholeBody;

    [Header("Attack :")]
    public float attackCountdown;
    public float attackCountdownTimer;
    public Attack[] attackList;

    [Header("Effects")]
    public ParticleSystem takingDamageParticle;

    private Animator anim;
    public bool vulnerable;

    void Start()
    {
        vulnerable = false;
        playerDamageType = PlayerDamageSound.Heavy_Hit;

        _Player = GameObject.FindGameObjectWithTag("Player");
        playerBehavior = _Player.GetComponent<PlayerBehaviour>();
        anim = gameObject.GetComponent<Animator>();

        for (int i = 0; i < attackList.Length; i++)
        {
            attackList[i].countdownTimer = attackList[i].countdown;
        }
        isPLayerDeadScript = GetComponent<IsPlayerDead>();

        changePosCountdownTimer = UnityEngine.Random.Range(changePosCountdownMin, changePosCountdownMax);
        attackCountdownTimer = attackCountdown;
    }

    void Update()
    {
        //resetAttack
        for (int i = 0; i < attackList.Length; i++)
        {
            if (attackList[i].countdownTimer> 0)
            {
                attackList[i].countdownTimer -= Time.deltaTime;
            }
        }
    }

    public void CheckPlayersLocation()
    {
        if (_Player.gameObject.transform.position.x <= transform.position.x)
            wholeBody.localScale = new Vector3(1, 1, 1);
        else
            wholeBody.localScale = new Vector3(-1, 1, 1);
    }

    public void TakeDamage()
    {
        anim.SetTrigger("Hurt");
        Instantiate(takingDamageParticle, transform);
    }

    public void Move()
    {
        transform.position = Vector2.MoveTowards(transform.position, _Player.transform.position, speed * Time.fixedDeltaTime);
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

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(attackList[2].pos.position, attackList[2].attackRange);
    }
}
