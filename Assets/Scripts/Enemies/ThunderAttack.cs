using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThunderAttack : MonoBehaviour
{
    [SerializeField] float damage;
    [SerializeField] float thunderSpeed;

    private bool doDamage;
    private Animator anim;
    private Rigidbody2D rb;

    void Awake()
    {        
        anim = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void OnEnable()
    {
        rb.constraints = RigidbodyConstraints2D.FreezeRotation;
        rb.velocity = new Vector2(0, -thunderSpeed);
        doDamage = true;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        gameObject.GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezeAll;
        anim.Play("Eagle_Thunder");

        if (collision.gameObject.CompareTag("Player") && doDamage)
        {
            collision.gameObject.GetComponent<PlayerBehaviour>().TakeDamage(damage, Vector2.zero, 0);
        }
        doDamage = false;
    }

    public void KillThunder()
    {
        ObjectPool.Instance.returnToPool("Thunder Attack", gameObject);
    }
}
