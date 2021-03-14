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

    Rigidbody2D rb;
    bool pushed;
    float lastSpeed, currentSpeed;

    private void Awake()
    {
        pushed = false;
        //lastSpeed = 0f;
    }

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        Invoke("Push", 5f);
    }

    void FixedUpdate()
    {
        currentSpeed = rb.velocity.sqrMagnitude;

        if ((lastSpeed - currentSpeed) > 30 && pushed)
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
            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, damageDirection, force);
            StartCoroutine(OnDieAnimation());
        }                  
    }
    IEnumerator OnDieAnimation()
    {
        rb.constraints = RigidbodyConstraints2D.FreezeAll;
        while (transform.localScale.x > 0.5)
        {
            LeanTween.scale(gameObject, new Vector3(0.5f, 0.5f, 0.5f), 0.03f);
            yield return null;
        }
        Instantiate(breakSnow, transform.position, breakSnow.transform.rotation);
        Instantiate(breakSnowGlow, transform.position, breakSnow.transform.rotation);
        Destroy(gameObject);
    }

    void Push()
    {
        rb.AddForce(pushRight ? Vector2.right : Vector2.left * startForce, ForceMode2D.Force);
        pushed = true;
    }
}
