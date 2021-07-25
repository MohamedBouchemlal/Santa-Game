using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowBall : MonoBehaviour
{
    [SerializeField] float damage;
    [SerializeField] ParticleSystem breakSnow;
    [SerializeField] ParticleSystem breakSnowGlow;
    [SerializeField] float startForce;
    [SerializeField] bool pushRight;

    [Header("Audio")]
    [SerializeField] AudioSource myAS;
    [SerializeField] AudioClip rollingClip;
    [SerializeField] AudioClip explosionClip;

    Rigidbody2D rb;
    bool pushed;
    float lastSpeed, currentSpeed;

    private void Awake()
    {
        pushed = false;
        rb = GetComponent<Rigidbody2D>();
        //lastSpeed = 0f;
    }
    private void Start()
    {
        //Invoke("Push", 1);
    }

    void FixedUpdate()
    {
        currentSpeed = rb.velocity.sqrMagnitude;

        if ((lastSpeed - currentSpeed) > 42 && pushed)
            StartCoroutine(OnDieAnimation()); 
        
        lastSpeed = currentSpeed;   
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
