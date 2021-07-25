using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Penguin : MonoBehaviour
{

    [SerializeField] float damage;
    [SerializeField] float timeBtwAttack;
    [SerializeField] float damageForce;
    [SerializeField] SpriteRenderer[] bodyPart;
    [SerializeField] float goAwayOffset;
    [SerializeField] EnemyMovement myMovement;

    private float oldSpeed;
    private float attackTimer;
    private GameObject player;
    private Transform myTransform;
    private Animator anim;
    private bool stunned;

    void Start()
    {
        stunned = false;
        attackTimer = timeBtwAttack;
        player = GameObject.FindGameObjectWithTag("Player");
        myTransform = transform;
        anim = GetComponent<Animator>();
        oldSpeed = myMovement.speed;
    }

    void Update()
    {
        if (attackTimer > 0)
            attackTimer -= Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player") && attackTimer <= 0)
        {
            Vector2 forceDirection = (player.transform.position - myTransform.position).normalized;
            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, forceDirection, damageForce, PlayerDamageSound.Light_Hit);
            attackTimer = timeBtwAttack;
        }
    }

    public void GetStunned()
    {
        anim.SetTrigger("GetStunned");
        stunned = true;
        GetComponent<CapsuleCollider2D>().enabled = false;
        GetComponent<EnemyMovement>().StopMovement();
    }

    public void TakeDamage()
    {
        anim.SetTrigger("TakeDamage");
        StartCoroutine(SlowDown());
    }
    IEnumerator SlowDown()
    {
        myMovement.speed *= 0.4f;
        yield return new WaitForSeconds(1f);
        myMovement.speed = oldSpeed;
    }
    public void SlideAway()
    {
        int layerOrder = 10;
        foreach (SpriteRenderer part in bodyPart)
        {
            part.sortingLayerName = "Background";
            part.sortingOrder = layerOrder;
            layerOrder++;
        }

        transform.GetChild(0).localScale = new Vector3((goAwayOffset > 0 ? -1 : 1), 1, 1);
        LeanTween.moveX(gameObject, transform.position.x + goAwayOffset, 2).setDestroyOnComplete(true);
    }
}
