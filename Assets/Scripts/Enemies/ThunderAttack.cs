using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThunderAttack : MonoBehaviour
{
    [SerializeField] float damage;
    [SerializeField] float thunderSpeed;
    [SerializeField] AudioSource myAS;

    private bool doDamage;
    private Animator anim;
    private Rigidbody2D rb;
    private Collider2D c2D;

    void Awake()
    {        
        anim = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
        c2D = GetComponent<Collider2D>();
    }

    private void OnEnable()
    {
        rb.constraints = RigidbodyConstraints2D.FreezeRotation;
        rb.velocity = new Vector2(0, -thunderSpeed);
        doDamage = true;
        c2D.enabled = true;// zayd
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        gameObject.GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezeAll;
        anim.Play("Eagle_Thunder");

        if (collision.gameObject.CompareTag("Player") && doDamage)
        {
            collision.gameObject.GetComponent<PlayerBehaviour>().TakeDamage(damage, Vector2.zero, 0, PlayerDamageSound.Default);
        }
        doDamage = false;
    }

    public void KillThunder()
    {
        
        ObjectPool.Instance.returnToPool("Thunder Attack", gameObject);
    }

    public void PlayLightningSound()
    {
        myAS.Play();
    }
    IEnumerator KillCourotine()
    {
        while (myAS.isPlaying)
        {
            yield return null;
        }
        ObjectPool.Instance.returnToPool("Thunder Attack", gameObject);
    }
    //For Reindeer Boss

    public void LaunchThunderReindeer(float dmg, Vector2 direction, float sp)
    {
        rb.velocity = direction * sp;
        damage = dmg;
    }
}
