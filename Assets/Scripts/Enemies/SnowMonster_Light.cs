using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowMonster_Light : MonoBehaviour
{
    private GameObject _Player;
    private CharacterController2D _playerController;
    private IsPlayerDead isPLayerDeadScript;
    public LayerMask whoIsPlayer;

    [Header("Movement :")]
    public bool movable;
    public float x_Diff;
    public float speed;
    private Vector2 pos1, pos2;
    private Vector2 target;
    private float old_Xpos;
    public Transform wholeBody;

    [Header("Attack :")]
    public float damage;
    public float damageForce;
    public Transform attackPos;
    public float distanceToAttack;
    public float distanceToAttackOffset;
    private float detectDistance;
    public float attackRange;   
    public float timeBtwAttack;
    private float attackTimer;

    [Header("Effects")]
    public ParticleSystem takingDamageParticle;

    private Animator anim;

    void Start()
    {
        _Player = GameObject.FindGameObjectWithTag("Player");
        _playerController = _Player.GetComponent<CharacterController2D>();
        anim = gameObject.GetComponent<Animator>();
        attackTimer = timeBtwAttack;
        isPLayerDeadScript = GetComponent<IsPlayerDead>();
        pos1 = transform.position;
        pos2 = new Vector2(transform.position.x + x_Diff, transform.position.y);
        old_Xpos = transform.position.x;
    }

    void Update()
    {       
        if (movable)
        {
            Move();
        }          
        else
            checkPlayersLocation();
        //resetAttack
        if (attackTimer > 0)
        {
            attackTimer -= Time.deltaTime;
        }

        //Attack when Player nearbey
        if (_playerController.m_Grounded)
            detectDistance = distanceToAttack;
        else
            detectDistance = distanceToAttack + distanceToAttackOffset;

        if (Vector2.Distance(_Player.transform.position, transform.position) < detectDistance)
        {
            if (attackTimer <= 0 && !isPLayerDeadScript.IsPLayerDead)
            {               
                Attack();
                attackTimer = timeBtwAttack;   
            }
        }     
    }

    void checkPlayersLocation()
    {
        if (_Player.gameObject.transform.position.x <= transform.position.x)
            wholeBody.localScale = new Vector3(-1, 1, 1);
        else
            wholeBody.localScale = new Vector3(1, 1, 1);
    }

    public void Attack()
    {
        anim.SetTrigger("Attack");
        StartCoroutine(StopMovement(0.5f));
    }
    //called in animation
    void OnAttack()
    {
        if (movable)
            checkPlayersLocation();

        Collider2D PL_Collider = Physics2D.OverlapCircle(attackPos.position, attackRange, whoIsPlayer);
        if (PL_Collider)
        PL_Collider.GetComponent<PlayerBehaviour>().TakeDamage(damage, wholeBody.transform.localScale.x * Vector2.right, damageForce);
    }

    public void TakeDamage()
    {
        anim.SetTrigger("Hurt");
        Instantiate(takingDamageParticle, transform);
    }

    private void Move()
    {
        //movement
        if (Vector2.Distance(transform.position, pos1) <= 0.2f)
            target = pos2;
        else if (Vector2.Distance(transform.position, pos2) <= 0.2f)
            target = pos1;

        //looking section
        if(transform.position.x < old_Xpos)
            wholeBody.transform.localScale = new Vector3(-1, 1, 1);
        else if(transform.position.x > old_Xpos)
            wholeBody.transform.localScale = new Vector3(1, 1, 1);

        old_Xpos = transform.position.x;
        transform.position = Vector2.MoveTowards(transform.position, target, speed * Time.deltaTime);       
    }

    public void Die()
    {
        speed = 0;
        anim.SetTrigger("Die");        
    }

    IEnumerator StopMovement(float time)
    {
        movable = false;
        yield return new WaitForSeconds(time);
        movable = true;
    }

    public void AnimationDestroy()
    {
        //CameraShaker.instance.ZoomOut(0.1f);
        Destroy(gameObject);
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(attackPos.position, attackRange);
    }
}
