using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private Animator anim;
    public float bulletDamage;
    private float bulletLife = 5;
    private ObjectPool objectPool;
    private Vector2 startPos;
    private LayerMask enemyLayer;
    private Rigidbody2D rb2D;
    private Collider2D c2D;
    private bool instantiated;
    [Header("Audio")]
    [SerializeField] AudioSource myAS;
    [SerializeField] AudioClip explosionClip;
    [SerializeField] AudioClip explosionEnemyClip;

    private void Awake()
    {
        anim = gameObject.GetComponent<Animator>();
        objectPool = ObjectPool.Instance;
        enemyLayer = LayerMask.NameToLayer("Enemy");
        rb2D = GetComponent<Rigidbody2D>();
        c2D = GetComponent<Collider2D>();
        instantiated = true;
    }
    private void OnEnable()
    {
        if (instantiated)
            c2D.enabled = true;
    }

    private void Update()
    {
        if (bulletLife <= 0)
        {
            killBullet();
            bulletLife = 5;
        }
        else
            bulletLife -= Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == enemyLayer)
        {
            rb2D.constraints = RigidbodyConstraints2D.FreezeAll;
            anim.Play("Bullet_Explosion");
            collision.GetComponent<EnemyHealth>().TakeDamage(bulletDamage);
            myAS.PlayOneShot(explosionEnemyClip);
            c2D.enabled = false;
        }
        else if (collision.gameObject.CompareTag("Destructable"))
        {
            rb2D.constraints = RigidbodyConstraints2D.FreezeAll;
            anim.Play("Bullet_Explosion");
            collision.gameObject.GetComponent<DestructableObject>().TakeDamage(bulletDamage);
            myAS.PlayOneShot(explosionClip);
            c2D.enabled = false;
        }

    }
    public void killBullet()
    {
        StartCoroutine(KillCourotine());
    }

    IEnumerator KillCourotine()
    {
        while (myAS.isPlaying)
        {
            yield return null;
        }
        objectPool.returnToPool("PlayerBullet", gameObject);
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        rb2D.constraints = RigidbodyConstraints2D.FreezeAll;
        anim.Play("Bullet_Explosion");
        ExploisionShake();
        myAS.Play();
        c2D.enabled = false;
        if (collision.gameObject.CompareTag("Obstacle"))
        {
            collision.gameObject.GetComponent<EnemyHealth>().TakeDamage(bulletDamage);
            myAS.PlayOneShot(explosionEnemyClip);
        }
        else if (collision.gameObject.CompareTag("Destructable"))
        {
            rb2D.constraints = RigidbodyConstraints2D.FreezeAll;
            anim.Play("Bullet_Explosion");
            collision.gameObject.GetComponent<DestructableTile>().TakeDamage();
            myAS.PlayOneShot(explosionClip);
            c2D.enabled = false;
        }
        else
            myAS.PlayOneShot(explosionClip);
    }

    private void ExploisionShake()
    {
        if (Vector2.Distance(transform.position, startPos) < 10)
            CameraShaker.Instance.ShakeCamera(0.2f, 0.05f, 0);
    }
}
