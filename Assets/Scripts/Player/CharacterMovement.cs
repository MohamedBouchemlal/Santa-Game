using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class CharacterMovement : MonoBehaviour
{
    private CharacterController2D Controller;
    private PlayerBehaviour playerBehavior;
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

    public Transform slopeRay;
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
            if (horizontalMove != 0 && Controller.m_Grounded) {               
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
                }
                else if(!Controller.m_Grounded && !doubleJump && canDoubleJump)
                {
                    groundedFeelTimer = 0;
                    jumpFeelTimer = 0;
                    anim.SetTrigger("TakeOff");
                    doubleJump = true;
                    SpawnDoubleJump();
                    canDoubleJump = false;
                }                  
            }
            if (Controller.m_Grounded)
            {
                anim.SetBool("isJumping", false);
                groundedFeelTimer = groundedFeelTimerRemember;
            }
            else
            {
                anim.SetBool("isJumping", true);
            }
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
        else if(!playerBehavior.TakingDamage && !allowMovement)
            Controller.Move(0, jump, doubleJump);
    }

    public bool OnSlope()
    {
        if (!allowJump)
            return false;
        RaycastHit2D hit = Physics2D.Raycast(slopeRay.position, Vector2.down, 0.3f, rayMask);
        if (hit)
        {
            float angle = Vector2.Angle(Vector2.down, hit.normal);
            if (angle < 140 && angle > 130)
            {
                slope = hit.normal;
                return true;
            }
        }
        return false;
    }
    public bool isMoving()
    {
        if (Mathf.Approximately(0f, horizontalMove))
            return false;
        else 
            return true;
    }
    public void playLandParticle()
    {
        if (landParticle.isPlaying)
            landParticle.Stop();
        if(!onDryGround)
            landParticle.Play();
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


