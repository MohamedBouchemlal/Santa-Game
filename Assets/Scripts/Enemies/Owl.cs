using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Owl : MonoBehaviour
{
    [SerializeField] float timeBtwAttack;
    [SerializeField] ParticleSystem hypnosisParticle; 
    [SerializeField] ParticleSystem takingDamageParticle;
    [SerializeField] Vector2 flyAwayOffset;

    private float attackTimer;
    private bool stunned;
    private CircleCollider2D hypnosisCollider;
    private Animator anim;
    private EnemySound enemySound;

    void Start()
    {
        hypnosisCollider = hypnosisParticle.GetComponent<CircleCollider2D>();
        attackTimer = timeBtwAttack;
        Physics2D.IgnoreCollision(GetComponent<CapsuleCollider2D>(), hypnosisCollider);
        anim = GetComponent<Animator>();
        enemySound = GetComponent<EnemySound>();
    }

    void Update()
    {
        if (attackTimer > 0)
            attackTimer -= Time.deltaTime;
        else if(!stunned)
            Hypnotize();

        if(!hypnosisParticle.isPlaying)
            hypnosisCollider.enabled = false;
    }

    void Hypnotize()
    {
        if (hypnosisParticle.isPlaying)
            hypnosisParticle.Stop();

        hypnosisParticle.Play();
        enemySound.PlayAttack();
        StartCoroutine(ActivateHypnosisCollider(0.8f));
        attackTimer = timeBtwAttack;
    }

    public void TakeDamage()
    {
        anim.SetTrigger("TakeDamage");
        if (takingDamageParticle)
        {
            if (takingDamageParticle.isPlaying)
                takingDamageParticle.Stop();
            takingDamageParticle.Play();
        }
    }

    public void GetStunned()
    {
        anim.SetTrigger("GetStunned");
        stunned = true;
        GetComponent<CapsuleCollider2D>().enabled = false;
        hypnosisCollider.enabled = false;
        GetComponent<EnemyMovement>().StopMovement();       
    }

    IEnumerator ActivateHypnosisCollider(float time)
    {
        yield return new WaitForSeconds(time);
        hypnosisCollider.enabled = true;
    }

    public void FlyAway()
    {
        LeanTween.move(gameObject, (Vector2)transform.position + flyAwayOffset, 4f).setDestroyOnComplete(true);
    }
}
