using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowMonsterBoss : MonoBehaviour
{
    private Boss boss;
    private Attack lightPunch;
    private Attack throwSpike;
    private Attack heavyPunch;
    private Attack throwSnowball;

    [Header("Movement Positions")]
    [SerializeField]
    Transform posLeft, posMiddle, posRight;
    Vector2 targetPos;

    [Header("Projectiles")]
    [SerializeField] GameObject spike;
    [SerializeField] GameObject snowball;

    private EnemyHealth myHealth;
    private Animator anim;
    private bool enraged;

    private float halfHealth;
    private void Start()
    {
        boss = GetComponent<Boss>();
        lightPunch = boss.attackList[0];
        throwSpike = boss.attackList[1]; ;
        heavyPunch = boss.attackList[2]; ;
        throwSnowball = boss.attackList[3];

        transform.position = posMiddle.position;
        targetPos = transform.position;

        myHealth = GetComponent<EnemyHealth>();
        anim = GetComponent<Animator>();
        enraged = false;
        halfHealth = myHealth.Health * 0.5f;
    }

    private void Update()
    {
        if (myHealth.Health <= halfHealth && !enraged)
        {
            anim.SetTrigger("Enraged");
            enraged = true;
        }
    }

    public void StartAnimation()
    {
        anim.SetTrigger("Start");
    }

    public void OnLightPunch()
    {
        Collider2D PL_Collider = Physics2D.OverlapCircle(lightPunch.pos.position, lightPunch.attackRange, boss.whoIsPlayer);
            if (PL_Collider)
                boss.playerBehavior.TakeDamage(lightPunch.damage, boss.wholeBody.transform.localScale.x * Vector2.left, lightPunch.force, boss.playerDamageType);
    }

    public void OnThrowSpikes()
    {
        GameObject S = Instantiate(spike, throwSpike.pos.position, spike.transform.rotation);
        ThrowableSpike sBehavior = S.GetComponent<ThrowableSpike>();
        sBehavior.SetVariables(throwSpike.damage, boss.playerBehavior, boss.wholeBody);
        S.transform.parent = null;
        sBehavior.LaunchSpike(-throwSpike.pos.up, true);
    }

    public void OnEnraged()
    {
        boss.speed += boss.speed * 0.2f;
        var direction = new GameObject().transform;
        direction.rotation = Quaternion.Euler(new Vector3(0, 0, 0));
        Vector3 rotationV = new Vector3(0, 0, 45);
        Vector3 instantPos = transform.position + new Vector3(0, -0.5f, 0);
        for (int i=0; i<8; i++)
        {                
            GameObject S = Instantiate(spike, instantPos, direction.rotation);
            S.transform.localScale = new Vector3(0.8f, 0.8f, 1);
            ThrowableSpike sBehavior = S.GetComponent<ThrowableSpike>();
            sBehavior.SetVariables(throwSpike.damage, boss.playerBehavior, boss.wholeBody);
            S.transform.parent = null;
            sBehavior.LaunchSpike(-direction.up, false);
            direction.Rotate(rotationV, Space.World);
        }
    }

    public void OnHeavyPunch()
    {
        Collider2D PL_Collider = Physics2D.OverlapCircle(heavyPunch.pos.position, heavyPunch.attackRange, boss.whoIsPlayer);
        if (PL_Collider)
            boss.playerBehavior.TakeDamage(heavyPunch.damage, boss.wholeBody.transform.localScale.x * Vector2.left, heavyPunch.force, boss.playerDamageType);
    }

    public void OnThrowSnowball()
    {
        GameObject S = Instantiate(snowball, throwSnowball.pos.position, Quaternion.identity);
        SnowBall sBehavior = S.GetComponent<SnowBall>();
        sBehavior.SetVariables(throwSnowball.damage, 50, boss.wholeBody.localScale.x < 0 ? true: false);
        S.transform.parent = null;
       // sBehavior.Push();
    }

    public void Move()
    {
        if (boss.changePosCountdownTimer <= 0)
        {
            int r = Random.Range(0, 2);
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
                    targetPos = posLeft.position;
                else
                    targetPos = posRight.position;
            }
            boss.changePosCountdownTimer = Random.Range(boss.changePosCountdownMin, boss.changePosCountdownMax);
        }
        else if((Vector2)transform.position != targetPos)
        {
            transform.position = Vector2.MoveTowards(transform.position, targetPos, boss.speed * Time.deltaTime);           
        }
        else
            boss.changePosCountdownTimer -= Time.deltaTime;
        boss.attackCountdownTimer -= Time.deltaTime;
    }
}
