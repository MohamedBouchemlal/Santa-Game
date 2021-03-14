using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private Animator anim;
    public float bulletDamage;
    private ObjectPool objectPool;
    private Vector2 startPos;
    private LayerMask enemyLayer;
    private Rigidbody2D rb2D;

    private void Awake()
    {
        anim = gameObject.GetComponent<Animator>();
        objectPool = ObjectPool.Instance;
        enemyLayer = LayerMask.NameToLayer("Enemy");
        rb2D = GetComponent<Rigidbody2D>();
    }
    private void OnEnable()
    {
        startPos = transform.position;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == enemyLayer)
        {
            rb2D.constraints = RigidbodyConstraints2D.FreezeAll;
            anim.Play("Bullet_Explosion");
            collision.GetComponent<EnemyHealth>().TakeDamage(bulletDamage);
        }
    }
    public void killBullet()
    {
        objectPool.returnToPool("PlayerBullet", gameObject);
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        rb2D.constraints = RigidbodyConstraints2D.FreezeAll;
        anim.Play("Bullet_Explosion");
        ExploisionShake();

        if (collision.gameObject.CompareTag("Obstacle"))
        {
            collision.gameObject.GetComponent<EnemyHealth>().TakeDamage(bulletDamage);
        }

        else if (collision.gameObject.CompareTag("Destructable"))
        {
            if (collision.gameObject.GetComponent<DestructableObject>())
                collision.gameObject.GetComponent<DestructableObject>().TakeDamage(bulletDamage);
            else
                collision.gameObject.GetComponent<DestructableTile>().TakeDamage();
        }
    }

    private void ExploisionShake()
    {
        if (Vector2.Distance(transform.position, startPos) < 10)
            CameraShaker.instance.ShakeCamera(0.2f, 0.05f, 0);
    }
}
