using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowableSpike : MonoBehaviour
{

    float damage;
    [SerializeField] ParticleSystem iceBreak;
    [SerializeField] float speed;

    [Header("Audio")]
    [SerializeField] AudioSource myAS;

    [SerializeField] Rigidbody2D rb;
    PlayerBehaviour playerBehavior;
    Transform bossBody;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        myAS = GetComponent<AudioSource>();
    }

    public void SetVariables(float damage, PlayerBehaviour playerBehavior, Transform bossBody)
    {
        this.damage = damage;
        this.playerBehavior = playerBehavior;
        this.bossBody = bossBody;
    }

    public void LaunchSpike(Vector2 direction, bool normalAttack)
    {
        rb.velocity = direction * speed;
        if(bossBody.localScale.x < 0 && normalAttack)
        transform.localScale = new Vector3(-1,-1,1);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
            playerBehavior.TakeDamage(damage, Vector2.down, 0f, PlayerDamageSound.Spike);

        Instantiate(iceBreak, transform.position, iceBreak.transform.rotation);
        myAS.Play();
        GetComponent<SpriteRenderer>().enabled = false;
        GetComponent<Collider2D>().enabled = false;
        Destroy(gameObject, myAS.clip.length);
    }
}
