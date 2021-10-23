using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReindeerBoss : MonoBehaviour
{
    private Boss boss;
    private Attack hit;
    private Attack runHit;
    private Attack electricityAttack;
    private Attack throwThunder;

    [Header("Attack Stuff")]
    [SerializeField] GameObject thunder;
    public PolygonCollider2D runHitCC2D;
    [SerializeField] ParticleSystem[] rageParticles;
    [SerializeField] ParticleSystem electricityParticle;

    private Animator anim;
    
    private float halfHealth;
    private float initialSpeed;
    public Vector2 playerPos;
    
    private void Start()
    {
        boss = GetComponent<Boss>();
        hit = boss.attackList[0];
        runHit = boss.attackList[1]; ;
        electricityAttack = boss.attackList[2]; ;
        throwThunder = boss.attackList[3];

        anim = GetComponent<Animator>();

        runHitCC2D.enabled = false;
        initialSpeed = boss.speed;
        boss.takingDamageParticle.playOnAwake = false;
        StopRageParticlesOff();  
    }

    public void StartAnimation()
    {
        anim.SetTrigger("Start");
    }

    public void StopRageParticlesOff()
    {
        foreach (ParticleSystem ps in rageParticles)
        {
            ps.Stop();
        }
    }

    public void OnHit()
    {
        Vector2 forceDirection = boss._Player.transform.position.x < transform.position.x ? new Vector2(-0.25f, 0.8f) : new Vector2(0.25f, 0.8f);
        float force = boss._Player.transform.position.x < transform.position.x ? hit.force: -hit.force;
        Collider2D PL_Collider = Physics2D.OverlapCircle(hit.pos.position, hit.attackRange, boss.whoIsPlayer);
        if (PL_Collider)
            boss.playerBehavior.TakeDamage(hit.damage, boss.wholeBody.transform.localScale.x * forceDirection, force, boss.playerDamageType);

        boss.attackCountdownTimer = boss.attackCountdown;
    }

    public void StartRunHit()
    {
        boss.goingRight = boss._Player.transform.position.x < transform.position.x ? false : true;
        if (boss.goingRight)
            boss.wholeBody.localScale = new Vector3(-1, 1, 1);
        else
            boss.wholeBody.localScale = new Vector3(1, 1, 1);

        playerPos = new Vector2(boss._Player.transform.position.x, transform.position.y);        
    }

    public void RunTowardsPlayer()
    {
        transform.position = Vector2.MoveTowards(transform.position, playerPos, boss.speed * Time.fixedDeltaTime);        
    }

    public void OnHornHit()
    {
        boss.playerBehavior.TakeDamage(runHit.damage, boss.wholeBody.transform.localScale.x * Vector2.left, runHit.force, boss.playerDamageType);
        FinishRunHit();
    }

    public void FinishRunHit()
    {
        runHitCC2D.enabled = false;
        boss.speed = initialSpeed;
        anim.SetBool("IsRunning", false);
        boss.attackCountdownTimer = boss.attackCountdown;
    }

    public void PlayRageParticles()
    {
        foreach (ParticleSystem ps in rageParticles)
        {
            ps.Play();
        }
    }

    public void OnElectricityAttack()
    {
        electricityParticle.Play();
        Vector2 forceDirection = (boss._Player.transform.position - transform.position).normalized;
        Collider2D PL_Collider = Physics2D.OverlapCircle(electricityAttack.pos.position, electricityAttack.attackRange, boss.whoIsPlayer);
        if (PL_Collider)
            boss.playerBehavior.TakeDamage(electricityAttack.damage, forceDirection, electricityAttack.force, boss.playerDamageType);

        boss.attackCountdownTimer = boss.attackCountdown;
    }

    public void OnThrowThunder()
    {
        GameObject T = ObjectPool.Instance.Get("Thunder Attack");
        T.SetActive(true);
        T.transform.position = throwThunder.pos.position;
        float rotationZ = boss.wholeBody.transform.localScale.x > 0 ? throwThunder.pos.localRotation.eulerAngles.z : -throwThunder.pos.localRotation.eulerAngles.z; //quaternion
        T.transform.rotation = Quaternion.Euler(0, 0, rotationZ);
        //T.transform.rotation = throwThunder.pos.localRotation;
        T.transform.localScale = new Vector3(1.5f, 1.5f, 1);// Doesn't work
        
        ThunderAttack sBehavior = T.GetComponent<ThunderAttack>();
        T.transform.parent = null;       
        sBehavior.LaunchThunderReindeer(throwThunder.damage, -sBehavior.transform.up, throwThunder.force);

        boss.attackCountdownTimer = boss.attackCountdown;
    }

    // In Animation
    public void DeactivateCollider()
    {
        GetComponent<PolygonCollider2D>().enabled = false;
    }

    public void InformBossFightManager()
    {
        FindObjectOfType<BossFightManager>().SetFightStage(BossFightManager.FightStage.End);
    }

    public void TakeDamage()
    {
        anim.SetTrigger("Hurt");
        if (boss.enraged)
        {
            boss.takingDamageParticle.Stop();
            boss.takingDamageParticle.Play();
        }
    }

    //Reindeer goes to end of level so that it seems that he will get mounted by santa
    //public void MoveTowardsEndOfLevel()
    //{
    //    transform.position = Vector2.MoveTowards(transform.position, targetPos, boss.speed * Time.deltaTime);
    //}
}
