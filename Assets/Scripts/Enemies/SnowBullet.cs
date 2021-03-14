using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowBullet : MonoBehaviour
{
    public float damage;
    public float damageForce;
    private Vector2 forceDirection;
    public Vector2 ForceDirection { set { forceDirection = value; } }
    private Animator anim;

    void Start()
    {
        anim = GetComponent<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        gameObject.GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezeAll;
        anim.Play("Snow_Bullet_Explosion");
    
        if (collision.gameObject.CompareTag("Player"))
        {
            collision.gameObject.GetComponent<PlayerBehaviour>().TakeDamage(damage, forceDirection, damageForce);           
        }
    }

    public void KillBullet()
    {
        Destroy(gameObject);
    }
}
