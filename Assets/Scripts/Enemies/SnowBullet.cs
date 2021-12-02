using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowBullet : MonoBehaviour
{
    public float damage;
    public float damageForce;
    private float bulletLife = 8;
    private Vector2 forceDirection;
    public Vector2 ForceDirection { set { forceDirection = value; } }
    private Animator anim;
    Collider2D c2D;
    Rigidbody2D rb;
    SoundDistance sD;
    bool instantiated = false;
    [Header("Audio")]
    [SerializeField] AudioSource myAS;

    [Header("For Fire Projectiles")]
    [SerializeField] GameObject[] explosionParticles;
    void Start()
    {
        instantiated = true;
        anim = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
        c2D = GetComponent<Collider2D>();
        sD = GetComponent<SoundDistance>();
    }

    private void OnEnable()
    {
        if (instantiated)
        {
            anim.Play("Snow_Bullet_Idle");
            c2D.enabled = true;
            sD.enabled = true;
        }
        bulletLife = 5;
    }
    private void Update()
    {
        if (bulletLife <= 0)
        {
            bulletLife = 8;
            KillBullet();           
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
            collision.gameObject.GetComponent<PlayerBehaviour>().TakeDamage(damage, forceDirection, damageForce, PlayerDamageSound.Default);           
        }
        myAS.Play();
    }

    public void KillBullet()
    {
        c2D.enabled = false;
        sD.enabled = false;
        StartCoroutine(KillCourotine());
    }
    IEnumerator KillCourotine()
    {
        while (myAS.isPlaying)
        {
            yield return null;
        }
        if (CompareTag("Boss Projectile"))
        {
            Destroy(gameObject);           
        }
        else
            ObjectPool.Instance.returnToPool("SnowBullet", gameObject);
    }

    public void PlayFireParticles()
    {
        foreach (GameObject ps in explosionParticles)
        {
            ps.transform.parent = null;
            ps.SetActive(true);
        }
    }

}
