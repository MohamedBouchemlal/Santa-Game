using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowBall : MonoBehaviour
{
    [SerializeField] float lifeSpan = 10;
    [SerializeField] float damage;
    [SerializeField] ParticleSystem breakSnow;
    [SerializeField] ParticleSystem breakSnowGlow;
    [SerializeField] float startForce;
    [SerializeField] bool pushRight;
    [SerializeField] bool usedInLevel;

    [Header("Audio")]
    [SerializeField] AudioSource myAS;
    [SerializeField] AudioClip rollingClip;
    [SerializeField] AudioClip explosionClip;


    Rigidbody2D rb;
    bool pushed;
    float lastSpeed, currentSpeed;

    public void SetVariables(float damage, float force, bool pushRight)
    {
        this.damage = damage;
        this.startForce = force;
        this.pushRight = pushRight;

        transform.localScale = new Vector3(0.8f, 0.8f, 1);
        transform.GetChild(0).gameObject.SetActive(false);
        myAS.PlayOneShot(rollingClip);

        if (pushRight)
            rb.velocity = new Vector2(15,0);
        else
            rb.velocity = new Vector2(-15, 0);
        
    }

    private void Awake()
    {
        pushed = false;
        rb = GetComponent<Rigidbody2D>();
        lastSpeed = 0f;
    }

    void FixedUpdate()
    {
        currentSpeed = rb.velocity.sqrMagnitude;

        if ((lastSpeed - currentSpeed) > 42 && pushed)
            StartCoroutine(OnDieAnimation());

        lastSpeed = currentSpeed;

        if (!usedInLevel) {
            lifeSpan -= Time.fixedDeltaTime;
            if(lifeSpan <= 0)
                StartCoroutine(OnDieAnimation());
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            GameObject player = collision.gameObject;
            Vector2 damageDirection = (player.transform.position - transform.position).normalized;
            float force = rb.velocity.magnitude;
            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, damageDirection, force, PlayerDamageSound.Heavy_Hit);
            StartCoroutine(OnDieAnimation());
        }                  
    }
    IEnumerator OnDieAnimation()
    {
        rb.constraints = RigidbodyConstraints2D.FreezeAll;
        myAS.Stop();
        myAS.PlayOneShot(explosionClip);
        LeanTween.scale(gameObject, new Vector3(0.5f, 0.5f, 0.5f), 0.05f);
        while (transform.localScale.x > 0.5)
        {           
            yield return null;
        }
        Instantiate(breakSnow, transform.position, breakSnow.transform.rotation);
        Instantiate(breakSnowGlow, transform.position, breakSnow.transform.rotation);
        GetComponent<Collider2D>().enabled = false;
        GetComponent<SpriteRenderer>().enabled = false;
        Destroy(gameObject, explosionClip.length);
    }

    public void Push()
    {
        myAS.PlayOneShot(rollingClip);
        rb.AddForce(pushRight ? Vector2.right : Vector2.left * startForce, ForceMode2D.Impulse);
        pushed = true;
    }
}
