using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowMonster_Range : MonoBehaviour
{
    [Header("Player Related :")]
    private GameObject _Player;
    public LayerMask shootingMask;
    public Transform wholeBody;
    public Transform arm_Canon;
    public float armRotationSpeed;
    private bool lookingRight;
    private float angle;

    [Header("Shoot :")]
    public GameObject bullet;
    public Transform bulletPos;
    public float bulletSpeed;  
    public float shootingRange;
    public float timeBtwAttack;
    private float shootingTimer;
    private Vector2 bulletDirection;

    [Header("Effects")]
    public ParticleSystem takingDamageParticle;
    private EnemyHealth enemyHealth;

    private Animator anim;

    void Start()
    {
        _Player = GameObject.FindGameObjectWithTag("Player");
        anim = gameObject.GetComponent<Animator>();
        shootingTimer = timeBtwAttack;
        enemyHealth = gameObject.GetComponent<EnemyHealth>();
    }

    private void Update()
    {   
        //ResetAttack
        if (shootingTimer > 0)
        {
            shootingTimer -= Time.deltaTime;
        }

        //Attack when Player nearbey
        if (Vector2.Distance(_Player.transform.position, transform.position) < shootingRange)
        {
            CheckPlayersLocation();
            RotateArm();
            if (shootingTimer <= 0 && CanShoot())
            {
                anim.SetTrigger("Shoot");
                shootingTimer = timeBtwAttack;
            }
        }       
    }

    void CheckPlayersLocation()
    {
        if (_Player.gameObject.transform.position.x <= transform.position.x)
        {
            wholeBody.localScale = new Vector3(-1f, 1, 1);
            lookingRight = false;
        }
        else {
            wholeBody.localScale = new Vector3(1f, 1, 1);
            lookingRight = true;
        }
            
    }

    void RotateArm()
    {
        Vector2 direction = (_Player.transform.position + new Vector3(0f, -0.5f, 0f)) - arm_Canon.position; //vector3 is offset of player's pos
        angle = Mathf.Atan2(direction.y, lookingRight ? direction.x : -direction.x) * Mathf.Rad2Deg;

        Quaternion rotation = Quaternion.Euler(0f,0f,angle);
        arm_Canon.localRotation = Quaternion.Lerp(arm_Canon.localRotation, rotation, armRotationSpeed * Time.deltaTime);      
    }

    bool CanShoot()
    {
        RaycastHit2D hit1 = Physics2D.Raycast(arm_Canon.position, arm_Canon.right, shootingRange, shootingMask);
        RaycastHit2D hit2 = Physics2D.Raycast(arm_Canon.position, -arm_Canon.right, shootingRange, shootingMask);
        if (hit1 && hit1.collider.gameObject.layer == 9) //9 = player layer
        {
            return true;
        }           
        else if (hit2 && hit2.collider.gameObject.layer == 9)
        {
            return true;
        }
        return false;
    }

    public void Shoot()
    {
        if(lookingRight)
            bulletDirection = arm_Canon.right;
        else
            bulletDirection = -arm_Canon.right;

        GameObject my_Bullet = Instantiate(bullet, bulletPos.position, Quaternion.Euler(0f, 0f, Mathf.Sign(wholeBody.localScale.x) * angle));
        my_Bullet.GetComponent<SnowBullet>().ForceDirection = bulletDirection;
        my_Bullet.GetComponent<Rigidbody2D>().velocity = bulletSpeed * bulletDirection;
    }
    
    public void TakeDamage()
    {     
        anim.SetTrigger("Hurt");
        if (enemyHealth.Health > 0)
            Instantiate(takingDamageParticle, transform);
    }

    public void Die()
    {
        anim.SetTrigger("Die");
        Destroy(gameObject, anim.GetCurrentAnimatorStateInfo(0).length);
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.cyan;
        Gizmos.DrawWireSphere(transform.position, shootingRange);
    }
}
