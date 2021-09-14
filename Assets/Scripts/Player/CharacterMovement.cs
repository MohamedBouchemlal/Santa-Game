using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class CharacterMovement : MonoBehaviour
{
    private CharacterController2D Controller;
    private PlayerBehaviour playerBehavior;
    private PlayerSound playerSound;
    float horizontalMove = 0f;
    public bool jump = false;
    public bool allowMovement = true;
    public bool allowJump = true;
    public bool doubleJump;
    private bool canDoubleJump = true;
    private bool onDryGround;
    //Timers for game feel
    private float jumpFeelTimer;
    private float jumpFeelTimerRemember = .2f;
    private float groundedFeelTimer;
    private float groundedFeelTimerRemember = .08f;

    [SerializeField] ParticleSystem walkingParticle;
    [SerializeField] ParticleSystem landParticle;
    [SerializeField] ParticleSystem jumpParticle;

    public Transform slopeDetector;
    public LayerMask rayMask;
    public Vector2 slope;

    Animator anim;
    Rigidbody2D rb;

    private void Start()
    {
        rb = gameObject.GetComponent<Rigidbody2D>();
        anim = gameObject.GetComponent<Animator>();
        Controller = gameObject.GetComponent<CharacterController2D>();
        playerBehavior = gameObject.GetComponent<PlayerBehaviour>();
        playerSound = GetComponent<PlayerSound>();
        onDryGround = false;
    }
    
    void Update()
    {
        jumpFeelTimer -= Time.deltaTime;
        groundedFeelTimer -= Time.deltaTime;

        if(GameManager.Instance.runTimePlatform == "Mobile")
            horizontalMove = CrossPlatformInputManager.GetAxisRaw("Horizontal");
        else
            horizontalMove = Input.GetAxisRaw("Horizontal");
        if (allowMovement)
        {
            if (horizontalMove != 0 && Controller.m_Grounded)
            {
                anim.SetBool("isRunning", true);

                if (walkingParticle.isStopped && !onDryGround)
                {
                    walkingParticle.Play();
                }
                else if (onDryGround)
                    walkingParticle.Stop();

            }
            else if (horizontalMove == 0 || !Controller.m_Grounded)
            {
                anim.SetBool("isRunning", false);

                if (walkingParticle.isPlaying)
                    walkingParticle.Stop();
            }
            if (CrossPlatformInputManager.GetButtonDown("Jump") || Input.GetButtonDown("Jump"))
                jumpFeelTimer = jumpFeelTimerRemember;

            if (jumpFeelTimer > 0 && !playerBehavior.TakingDamage && allowJump)
            {
                if (groundedFeelTimer > 0)
                {
                    groundedFeelTimer = 0;
                    jumpFeelTimer = 0;
                    jump = true;

                    if (Controller.standingOnSnow && !onDryGround)
                        jumpParticle.Play();
                    playerSound.PlayJumpSound();
                }
                else if (!Controller.m_Grounded && !doubleJump && canDoubleJump && DataManager.Instance.gameDataSave.playerData.doubleJump)
                {
                    groundedFeelTimer = 0;
                    jumpFeelTimer = 0;
                    anim.SetTrigger("TakeOff");
                    doubleJump = true;
                    SpawnDoubleJump();
                    canDoubleJump = false;
                    playerSound.PlayJumpSound();
                }
            }            
        }
        else
        {
            anim.SetBool("isRunning", false);

            if (walkingParticle.isPlaying)
                walkingParticle.Stop();
        }
        if (Controller.m_Grounded)
        {
            anim.SetBool("isJumping", false);
            groundedFeelTimer = groundedFeelTimerRemember;
            Controller.SetAirControl(true);
        }
        else
        {
            anim.SetBool("isJumping", true);
        }
    }
    void FixedUpdate()
    {
        if (allowMovement)
        {
            Controller.Move(horizontalMove * Time.fixedDeltaTime, jump, doubleJump);
            jump = false;
            doubleJump = false;
            if(Controller.m_Grounded)
                canDoubleJump = true;
        }
        else if(!playerBehavior.TakingDamage)
            Controller.Move(0, jump, doubleJump);

        if (playerBehavior.Dead && Controller.m_Grounded)
            playerBehavior.ResetVelocity();
    }

    public bool OnSlope()
    {
        //if (!allowJump)
        //    return false;
        RaycastHit2D hit = Physics2D.Raycast(slopeDetector.position, Vector2.down, 0.2f, rayMask);
        if (hit)
        {
            float angle = Vector2.Angle(hit.normal, Vector2.up);
            if (angle < 80 && angle > 20)
            {
                slope = hit.normal;
                return true;
            }
        }
        return false;
    }
    public bool IsMoving()
    {
        if (Mathf.Approximately(0f, horizontalMove))
            return false;
        else 
            return true;
    }

    public bool IsFacingRight()
    {
        return Controller.facingRight;
    }

    public void playLandParticle()
    {
        if (landParticle.isPlaying)
            landParticle.Stop();
        if (!onDryGround)
        {
            landParticle.Play();
            playerSound.PlayLandingSound();
        }
    }
  
    void SpawnDoubleJump()
    {
        GameObject doubleJumpEffect = ObjectPool.Instance.Get("Double Jump");
        doubleJumpEffect.transform.position = Controller.GroundCheck.position;      
        doubleJumpEffect.SetActive(true);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == LayerMask.NameToLayer("Dry Ground"))
            onDryGround = true;
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.layer == LayerMask.NameToLayer("Dry Ground"))
            onDryGround = false;
    }
}


