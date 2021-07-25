using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleBehaviour : MonoBehaviour
{
    public ParticleSystem takingDamageParticle;
    public float damage;
    public float damageCountdown;
    public float damageForce;
    private float damageTimer;
   
    private EnemyHealth enemyHealth;
    private Animator anim;

    void Start()
    {
        damageTimer = damageCountdown;
        enemyHealth = gameObject.GetComponent<EnemyHealth>();
        anim = gameObject.GetComponent<Animator>();
    }

    private void Update()
    {
        if (damageTimer > 0)
         damageTimer -= Time.deltaTime;
    }

    public void TakeDamage(float damage)
    {
        CameraShaker.Instance.ShakeCamera(0.2f, 0.05f, 0);
        anim.SetTrigger("Hurt");
        if(enemyHealth.Health > 0)
            Instantiate(takingDamageParticle, transform.position, takingDamageParticle.transform.rotation);
    }

    public void Die()
    {
        anim.SetTrigger("Die");
        GetComponent<Collider2D>().enabled = false;
    }

    public void AnimationDestroy()
    {
        Destroy(gameObject);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        GameObject pl = collision.gameObject;
       
        if (pl.CompareTag("Player"))
        {
            Vector2 direction = (pl.transform.position - transform.position).normalized;
            Vector2 finalDirection = new Vector2(direction.x, direction.y-0.5f); //0.5f is an offset

            if (damageTimer <= 0)
            {
                pl.GetComponent<PlayerBehaviour>().TakeDamage(damage, finalDirection, damageForce, PlayerDamageSound.Spike);
                damageTimer = damageCountdown;
            }
        }          
    }
}
