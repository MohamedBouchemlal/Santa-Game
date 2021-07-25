using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallingSpike : MonoBehaviour
{
    [SerializeField] float damage;
    [SerializeField] float xOffset;
    [SerializeField] float yOffset;
    [SerializeField] ParticleSystem iceBreak;
    [SerializeField] float gravity = 1.5f;

    [Header("Audio")]
    [SerializeField] AudioClip crackClip;
    [SerializeField] AudioClip breakClip;

    Rigidbody2D rb;
    private GameObject player;
    private Transform playerTransform;
    private Transform myTransform;
    private AudioSource myAS;
    private bool fell;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        myAS = GetComponent<AudioSource>();
        player = GameObject.FindGameObjectWithTag("Player");
        playerTransform = player.transform;
        myTransform = transform;
        fell = false;
    }

    void Update()
    {
        if (fell)
            return;
        else
        {
            float distanceX = Mathf.Abs(playerTransform.position.x - myTransform.position.x);
            float distanceY = Mathf.Abs(playerTransform.position.y - myTransform.position.y);
            if (distanceX <= xOffset && playerTransform.position.y < myTransform.position.y && distanceY <= yOffset)
            {
                fell = true;
                myAS.PlayOneShot(crackClip);
                myTransform.LeanRotateZ(10, 0.1f).setLoopPingPong(1).setOnComplete(() =>
                {
                    myTransform.LeanRotateZ(-10, 0.1f).setLoopPingPong(1).setOnComplete(() =>
                    {
                        rb.gravityScale = gravity;
                    });
                });
            }
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, Vector2.down, 0f, PlayerDamageSound.Spike);     

        Instantiate(iceBreak, transform.position, iceBreak.transform.rotation);
        myAS.PlayOneShot(breakClip);
        GetComponent<SpriteRenderer>().enabled = false;
        GetComponent<Collider2D>().enabled = false;
        Destroy(gameObject, breakClip.length);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        string enemyMask = LayerMask.LayerToName(collision.gameObject.layer);
        if (enemyMask == "Enemy")
        {
            collision.GetComponent<EnemyHealth>().TakeDamage(damage * 2);
            Instantiate(iceBreak, transform.position, iceBreak.transform.rotation);
            myAS.PlayOneShot(breakClip);
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            Destroy(gameObject, breakClip.length);
        }
    }
}
