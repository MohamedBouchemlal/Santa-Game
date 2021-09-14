using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerBehaviour : MonoBehaviour
{
    //other scripts
    private CharacterMovement movement;
    private CharacterController2D Controller;
    private PlayerSound playerSound;
    private PlayerStatus player_Status;
    private ObjectPool objectPool;  

    public enum WeaponState { MELEE, RANGE };
    private WeaponState wpnState;
    public WeaponState WpnState { get { return wpnState; } }
    private bool canSwitch;
    private bool isPoweredUp;

    private bool takingDamage;
    public bool TakingDamage { get { return takingDamage;} }

    private bool dead;
    public bool Dead { get { return dead; } }

    [Header("Range:")]
    [SerializeField] GameObject bullet;
    [SerializeField] Transform bullet_pos;
    [SerializeField] float bulletDamage;   
    private float actualBulletDamage;
    [SerializeField] float betweenRangeAttack = 0.3f;
    [SerializeField] ParticleSystem emptyShotParticle;

    //Attack
    [Header("Melee:")]
    [SerializeField] float damage;
    private float actualDamage;
    [SerializeField] float betweenAttack = 0.5f; 
    private float attackTimer;
    [SerializeField] Transform attackPos;
    [SerializeField] LayerMask whoIsEnemy;
    [SerializeField] AnimationCurve attackMoveCurce;
    [SerializeField] float attackRange;
    [SerializeField] LayerMask attackMoveRayMask;
    
    private Animator anim;
    private Rigidbody2D rb;
    private CapsuleCollider2D CC2D;
    //Die by falling
    private Vector2 trapSpawnPos;
    private bool diedByFalling;

    void Start()
    {
        //check if there's a save to take variables from
        //if (DataManager.Instance.IsThereASave())
        //{
        //    actualBulletDamage = DataManager.Instance.gameDataSave.playerData.BulletDamage;
        //    //...
        //}
        //else
        //{
            actualBulletDamage = bulletDamage;
            actualDamage = damage;
        //}
        attackTimer = betweenAttack;
        isPoweredUp = false;
        canSwitch = true;
        diedByFalling = false;
        rb = gameObject.GetComponent<Rigidbody2D>();
        anim = gameObject.GetComponent<Animator>();
        CC2D = GetComponent<CapsuleCollider2D>();
       
        Controller = gameObject.GetComponent<CharacterController2D>();
        movement = gameObject.GetComponent<CharacterMovement>();
        player_Status = gameObject.GetComponent<PlayerStatus>();
        playerSound = GetComponent<PlayerSound>();
        objectPool = ObjectPool.Instance;
        wpnState = WeaponState.MELEE;
        PlayerStatus.OnDeathEvent += Die;
    }

    void Update()
    {
        //Switch Weapons
        if ((Input.GetKeyDown(KeyCode.R) || CrossPlatformInputManager.GetButtonDown("Switch")) && canSwitch && !takingDamage && Controller.m_Grounded)
        {
            if(wpnState == WeaponState.MELEE)
            {
                switchToRange();
            }
            else if(wpnState == WeaponState.RANGE)
            {
                switchToMelee();
            }
        }
        //resetAttack
        if (attackTimer > 0)
            attackTimer -= Time.deltaTime;

        if ((CrossPlatformInputManager.GetButtonDown("Attack") || Input.GetKeyDown(KeyCode.X))&& !takingDamage)
        {
            if (attackTimer <= 0)
            {
                Attack();        
            }
        }
        //temporary to test transformation
        if (Input.GetKeyDown(KeyCode.C) && player_Status.CanUseEnergy() && !isPoweredUp)
        {           
            PowerUp();
        }            
        if (Input.GetKeyDown(KeyCode.V))
        {
            PowerDown();
        }           
    }
    private void Attack()
    {
        if (!takingDamage)
        {
            if (wpnState == WeaponState.MELEE)
            {
                anim.SetTrigger("Attack");
                playerSound.PlaySwordAttackSound();
            }
            else if(wpnState == WeaponState.RANGE)
            {
                if (player_Status.CanUseEnergy())
                {
                    anim.SetTrigger("RangeAttack");
                    player_Status.DecreaseEnergy("Bullet");
                }
                else
                {
                    anim.SetTrigger("EmptyShot");
                    if(transform.localScale.x < 0)
                    {
                        emptyShotParticle.transform.rotation = Quaternion.Euler(0,0,-4+180);
                        emptyShotParticle.Play();
                    }
                    else
                    {
                        emptyShotParticle.transform.rotation = Quaternion.Euler(0,0,-5);
                        emptyShotParticle.Play();
                    }                   
                }
            }
        }
        if(wpnState == WeaponState.MELEE)
            attackTimer = betweenAttack;
        else if(wpnState == WeaponState.RANGE)
            attackTimer = betweenRangeAttack;
    }

    //used in animation
    void Start_Attack()
    {
        
        Collider2D[] Enemy_Collider = Physics2D.OverlapCircleAll(attackPos.position, attackRange, whoIsEnemy);
        
        for (int i = 0; i < Enemy_Collider.Length; i++)
        {
                Vector2 effectPos = Enemy_Collider[i].offset + (Vector2)Enemy_Collider[i].transform.position;
                SpawnMonsterHitEffect(effectPos, "Hit Effect Normal");


            if (Enemy_Collider[i].tag == "Destructable")
            {
                if (Enemy_Collider[i].GetComponent<DestructableObject>().Health < actualDamage)
                    SpawnMonsterHitEffect(Enemy_Collider[i].transform.position, "Hit Effect Blow");

                Enemy_Collider[i].GetComponent<DestructableObject>().TakeDamage(actualDamage);
            }
            else
            {
                if (Enemy_Collider[i].GetComponent<EnemyHealth>().Health < actualDamage)
                    SpawnMonsterHitEffect(Enemy_Collider[i].transform.position, "Hit Effect Blow");

                Enemy_Collider[i].GetComponent<EnemyHealth>().TakeDamage(actualDamage);
            }
        }

        Collider2D[] Ground_Collider = Physics2D.OverlapCircleAll(attackPos.position, attackRange * 0.7f, Controller.whatIsGround);
        for (int i = 0; i < Ground_Collider.Length; i++)
        {
            if (Ground_Collider[i].tag == "Destructable" && Ground_Collider[i].GetComponent<DestructableTile>())
            {
                Ground_Collider[i].GetComponent<DestructableTile>().TakeDamage();
                SpawnMonsterHitEffect(Ground_Collider[i].transform.position, "Hit Effect Normal");
            }
        }
    }

    private void switchToRange()
    {
        wpnState = WeaponState.RANGE;
        anim.SetBool("Ranged", true);
    }

    private void switchToMelee()
    {
        wpnState = WeaponState.MELEE;
        anim.SetBool("Ranged", false);
    }

    //used in animation
    public void MoveForward_On_Attack()
    {
        float lerpPos;
        Vector2 colliderHalfSize = new Vector2(CC2D.size.x * 0.5f, -0.5f);
        Vector2 colliderPoint = (Vector2)transform.position + (Controller.facingRight ? colliderHalfSize : -colliderHalfSize);
        RaycastHit2D hit = Physics2D.Raycast(colliderPoint, Controller.facingRight ? transform.right : -transform.right, 0.5f, attackMoveRayMask);

        if (hit)
        {
            float distanceFromObject = Vector2.Distance(colliderPoint, hit.point);
            lerpPos = transform.position.x + (Controller.facingRight ? distanceFromObject : -distanceFromObject);
        }          
        else
            lerpPos = transform.position.x + (Controller.facingRight ? 0.5f : -0.5f);

        LeanTween.moveX(gameObject, lerpPos, 0.2f).setEase(attackMoveCurce);
    }

    public void MoveBack_On_Shoot()
    {
        float lerpPos = transform.position.x + (Controller.facingRight ? -0.1f : 0.1f);

        float xShake = Controller.facingRight ? -0.05f : 0.05f; 
        float rotShake = Controller.facingRight ? 0.1f : -0.1f;

        LeanTween.moveX(gameObject, lerpPos, 0.1f).setEase(attackMoveCurce);
        CameraShaker.Instance.BackwardShake(xShake, rotShake);
    }

    public void Shoot()
    {
        GameObject my_Bullet = objectPool.Get("PlayerBullet");
        Rigidbody2D bullet_Rb = my_Bullet.GetComponent<Rigidbody2D>();

        my_Bullet.GetComponent<Bullet>().bulletDamage = actualBulletDamage;
        my_Bullet.transform.position = bullet_pos.position;
        my_Bullet.SetActive(true);
        my_Bullet.transform.localScale = new Vector3(Mathf.Sign(gameObject.transform.localScale.x * 1), my_Bullet.transform.localScale.y, 0);

        bullet_Rb.constraints = RigidbodyConstraints2D.FreezeRotation;
        bullet_Rb.velocity = new Vector2(15 * Mathf.Sign(gameObject.transform.localScale.x), 0f);       
    }

    //Movement
    public void AllowMovement()
    {
        if (!dead)
        {
            movement.allowMovement = true;
            Controller.canFlip = true;
        }
    }
    public void UnAllowMovement()
    {
        movement.allowMovement = false;
        Controller.canFlip = false;
    }
    //Jump
    public void AllowJump()
    {
        if(!dead)
            movement.allowJump = true;
    }
    public void UnAllowJump()
    {
        movement.allowJump = false;
    }
    //Switch
    public void AllowSwitch()
    {
        if (!dead)
            canSwitch = true;
    }
    public void UnAllowSwitch()
    {
        canSwitch = false;
    }

    //IsTaking Damage
    public void EnableTakingDamage()
    {
        takingDamage = true;
    }
    public void DisableTakingDamage()
    {
        takingDamage = false;
    }

    public void TakeDamage(float Damage, Vector2 damageDirection, float takingDamageForce, PlayerDamageSound damageType)
    {
        if (!takingDamage)
        {
            float xShake = damageDirection.x < 0 ? -0.2f : 0.2f;
            float rotShake = damageDirection.x < 0 ? 0.3f : -0.3f;
            SpawnMyHitEffect(damageDirection);
            CameraShaker.Instance.BackwardShake(xShake, rotShake);
            anim.SetTrigger("Hurt");
            playerSound.PlayDamageSound(damageType);
            player_Status.ReduceHealth(Damage);
            StartCoroutine(damageForce(damageDirection, takingDamageForce));
        }
    }

    public void ResetVelocity()
    {
        rb.velocity = Vector2.zero;
    }

    IEnumerator damageForce(Vector2 damageDirection, float takingDamageForce)
    {
        yield return new WaitForFixedUpdate();
        ResetVelocity();
        yield return new WaitForFixedUpdate();
        ResetVelocity();
        rb.AddForce(damageDirection * takingDamageForce, ForceMode2D.Impulse);
        yield break;
    }

    void SpawnMyHitEffect(Vector2 direction)
    {
        GameObject hEffect = objectPool.Get("Hit Effect Player");
        Vector2 playerPosOffset = new Vector2(0f, -0.45f);
        Vector2 effectOffset = new Vector2(0.2f, 0.4f);
        hEffect.transform.position = ((Vector2)transform.position + playerPosOffset) + (-direction * effectOffset);
        hEffect.SetActive(true);
    }

    void SpawnMonsterHitEffect(Vector3 pos, string Effect_Name)
    {
        GameObject hEffect = objectPool.Get(Effect_Name);
        hEffect.transform.position = pos;
        if (Controller.facingRight)
            hEffect.transform.localScale = new Vector3(1, 1, 1);
        else
            hEffect.transform.localScale = new Vector3(-1, 1, 1);
        hEffect.SetActive(true);
    }

    //Used in Animation
    public void ShakeCameraOnStransform()
    {
        CameraShaker.Instance.ShakeCamera(0.6f, 0.4f, 0f);
    }
    
    public void TransformZoomOut()
    {
        CameraShaker.Instance.ZoomOut(0.1f);
    }

    public void SetPowerUp(string b)
    {
        if (b == "true")
            isPoweredUp = true;
        else
            isPoweredUp = false;
    }

    void PowerUp()
    {
        anim.SetTrigger("Transform_Body");
        anim.SetBool("Transform", true);
        CameraShaker.Instance.ZoomIn(0.5f, transform, 4);
        playerSound.PlayPowerUpSound();
        actualDamage = damage + damage * 0.5f;
        actualBulletDamage = bulletDamage + bulletDamage * 0.5f;
        //Increase speed
    }
    void PowerDown()
    {
        anim.SetBool("Transform", false);
        actualDamage = damage;
        actualBulletDamage = bulletDamage;
        //Decrease Speed
    }

    public void Die()
    {
        TimeManager.Instance.DoSlowEffect(1.5f);
        CameraShaker.Instance.ZoomIn(1.5f, transform, 4);
        CameraShaker.Instance.ShakeCamera(0.2f, 0.2f, 0f);
        anim.SetBool("Dead", true);
        playerSound.PlayDieSound();
        dead = true;
        if (isPoweredUp)
        {
            anim.SetBool("Transform", false);
            PowerDown();
        }
        rb.bodyType = RigidbodyType2D.Static;
        GetComponent<CapsuleCollider2D>().isTrigger = true;
    }
    public void Revive()
    {
        //Create revive event that calls this function
        if (diedByFalling)
            transform.position = trapSpawnPos;
        CameraShaker.Instance.ZoomOut(0.5f);
        anim.SetTrigger("Revive");
        anim.SetBool("Dead", false);
        playerSound.PlayReviveSound();
        dead = false;
        diedByFalling = false;
        rb.bodyType = RigidbodyType2D.Dynamic;
        GetComponent<CapsuleCollider2D>().isTrigger = false;
    }

    public void SetDiedByFalling(Vector2 spawnPos)
    {
        diedByFalling = true;
        trapSpawnPos = spawnPos;
    }

    public void AcquireAbility(string ability) // delete ?
    {
        anim.Play("Upgrade_Weapon");
        switch (ability)
        {
            case "Ability Gun":
                DataManager.Instance.gameDataSave.playerData.rangeWeapon = true;
                break;
            case "Ability DoubleJump":
                DataManager.Instance.gameDataSave.playerData.doubleJump = true;
                break;
            case "Ability PowerUp":
                DataManager.Instance.gameDataSave.playerData.powerUp = true;
                break;
        }
    }

    public void FinishAcquiringAbility()
    {
        anim.Play("Idle");
    }

    private void OnDestroy()
    {
        PlayerStatus.OnDeathEvent -= Die;
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere((Vector2)attackPos.position, attackRange);
    }
}
