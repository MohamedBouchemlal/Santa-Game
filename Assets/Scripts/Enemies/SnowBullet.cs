using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowBullet : MonoBehaviour
{
    public float damage;
    public float damageForce;
    private float bulletLife = 5;
    private Vector2 forceDirection;
    public Vector2 ForceDirection { set { forceDirection = value; } }
    private Animator anim;
    Rigidbody2D rb;
    bool instantiated = false;

    void Start()
    {
        instantiated = true;
        anim = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void OnEnable()
    {
        if(instantiated)
            anim.Play("Snow_Bullet_Idle");
    }
    private void Update()
    {
        if (bulletLife <= 0)
        {
            KillBullet();
            bulletLife = 5;
        }
        else
            bulletLife -= Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        rb.constraints = RigidbodyConstraints2D.FreezeAll;
        anim.Play("Snow_Bullet_Explosion");
    
        if (collision.gameObject.CompareTag("Player"))
        {
            collision.gameObject.GetComponent<PlayerBehaviour>().TakeDamage(damage, forceDirection, damageForce);           
        }
    }

    public void KillBullet()
    {
        ObjectPool.Instance.returnToPool("SnowBullet", gameObject);
    }
}
