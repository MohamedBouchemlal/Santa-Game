using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Eagle : MonoBehaviour
{
    [SerializeField] float damage;
    [SerializeField] float xOffset;
    [SerializeField] float timeBtwAttack;
    [SerializeField] ParticleSystem takingDamageParticle;
    [SerializeField] Vector2 flyAwayOffset;

    private EnemyHealth eagleHealth;
    private Animator anim;
    private float shootingTimer;
    private GameObject player;
    private Transform playerTransform;
    private Transform myTransform;
    private bool canShoot;
    private bool stunned;

    void Awake()
    {
        eagleHealth = GetComponent<EnemyHealth>();
        anim = GetComponent<Animator>();
        shootingTimer = timeBtwAttack;
        player = GameObject.FindGameObjectWithTag("Player");
        playerTransform = player.transform;
        myTransform = transform;
        canShoot = false;
    }

    void Update()
    {
        if (shootingTimer > 0)
            shootingTimer -= Time.deltaTime;
        else if (canShoot && shootingTimer <= 0 && !stunned)
        {
            anim.SetTrigger("Attack");
            shootingTimer = timeBtwAttack;
        }

        float distance = Mathf.Abs(playerTransform.position.x - myTransform.position.x);
        if (distance <= xOffset && playerTransform.position.y < myTransform.position.y)
            canShoot = true;
        else
            canShoot = false;     
    }

    public void ShootThunder()
    {
        var Thunder = ObjectPool.Instance.Get("Thunder Attack");
        Thunder.transform.position = myTransform.position + new Vector3(0, -1f, 0);      
        Thunder.SetActive(true);
    }

    public void TakeDamage()
    {
        anim.SetTrigger("TakeDamage");
        if(takingDamageParticle.isPlaying) // not working
            takingDamageParticle.Stop();
        takingDamageParticle.Play();
    }

    public void GetStunned()
    {
        anim.SetTrigger("GetStunned");
        stunned = true;
        GetComponent<CapsuleCollider2D>().enabled = false;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player") && !stunned)
        {
            Vector2 damageDirection = (playerTransform.position - myTransform.position).normalized;
            player.GetComponent<PlayerBehaviour>().ResetVelocity(); // maybe remove ?
            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, damageDirection, 2.5f);
        }           
    }

    public void FlyAway()
    {
        LeanTween.move(gameObject, (Vector2) myTransform.position + flyAwayOffset, 6f).setDestroyOnComplete(true);
    }
}
