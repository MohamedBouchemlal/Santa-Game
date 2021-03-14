using UnityEngine;
using UnityEngine.Events;

public class CharacterController2D : MonoBehaviour
{
	[SerializeField] private float m_JumpForce = 400f;							// Amount of force added when the player jumps.	
	[Range(0, .3f)] [SerializeField] private float m_MovementSmoothing = .05f;	// How much to smooth out the movement
	[SerializeField] private bool m_AirControl = false;							// Whether or not a player can steer while jumping;
	[SerializeField] private LayerMask m_WhatIsGround;							// A mask determining what is ground to the character
    public LayerMask whatIsGround => m_WhatIsGround;
	[SerializeField] private Transform m_GroundCheck;							// A position marking where to check if the player is grounded.
    public Transform GroundCheck => m_GroundCheck;
    [SerializeField] private float maxVelocityChange = 10;
    [SerializeField] private float runSpeed = 5;
    private CapsuleCollider2D m_CCollider2D;
    private bool isGravityUsedInAnim;

    public PhysicsMaterial2D fullFriction;
    public PhysicsMaterial2D noFriction;

    public bool standingOnSnow;

    const float k_GroundedRadius = .2f; // Radius of the overlap circle to determine if grounded
	public bool m_Grounded;            // Whether or not the player is grounded.
	private Rigidbody2D m_Rigidbody2D;
	private bool m_FacingRight = true;  // For determining which way the player is currently facing.
    public bool facingRight => m_FacingRight;
    public bool canFlip = true;
	private Vector3 m_Velocity = Vector3.zero;


	[Header("Events")]
	[Space]

	public UnityEvent OnLandEvent;

	[System.Serializable]
	public class BoolEvent : UnityEvent<bool> { }

    private CharacterMovement charMovement;
    private bool jumpingOnSlope;

	private void Awake()
	{
       isGravityUsedInAnim = false;
       standingOnSnow = false;
       charMovement = gameObject.GetComponent<CharacterMovement>();
       m_Rigidbody2D = GetComponent<Rigidbody2D>();
       m_CCollider2D = GetComponent<CapsuleCollider2D>();

        if (OnLandEvent == null)
			OnLandEvent = new UnityEvent();
	}

	private void FixedUpdate()
	{
		bool wasGrounded = m_Grounded;
		m_Grounded = false;

        // The player is grounded if a circlecast to the groundcheck position hits anything designated as ground
        // This can be done using layers instead but Sample Assets will not overwrite your project settings.
		Collider2D[] colliders = Physics2D.OverlapCircleAll(m_GroundCheck.position, k_GroundedRadius, m_WhatIsGround);
		for (int i = 0; i < colliders.Length; i++)
		{
			if (colliders[i].gameObject != gameObject)
			{               
                m_Grounded = true;
                if (colliders[i].CompareTag("Ground"))
                    standingOnSnow = true;
                else
                    standingOnSnow = false;
				if (!wasGrounded) {
                    OnLandEvent.Invoke();
                    wasGrounded = true;
                }
			}
		}
        if (!isGravityUsedInAnim)
        {
            if (m_Rigidbody2D.velocity.y < 0)
            {
                m_Rigidbody2D.gravityScale = 2f;
            }
            else
                m_Rigidbody2D.gravityScale = 1f;
        }      
    }


	public void Move(float move, bool jump, bool doubleJump)
	{
		//only control the player if grounded or airControl is turned on
		if (m_Grounded || m_AirControl)
		{
            //Handling Slopes
            if (charMovement.OnSlope())
            {
                float horizontalMove = Input.GetAxisRaw("Horizontal");
                float angle = Vector2.Angle(Vector2.down, charMovement.slope);
                jumpingOnSlope = true;

                if (horizontalMove == 0)
                    m_CCollider2D.sharedMaterial = fullFriction;
                else
                    m_CCollider2D.sharedMaterial = noFriction;

                if (horizontalMove < 0)
                   {
                    if (charMovement.slope.x > 0)
                        ClimbUp();
                    else
                        ClimbDown();
                   }
                else if (horizontalMove > 0)
                {
                    if (charMovement.slope.x > 0)
                        ClimbDown();
                    else
                        ClimbUp();
                }              
            }
            else
            {
                m_CCollider2D.sharedMaterial = noFriction;
                //Vector3 targetVelocity = new Vector2(move * 10f, m_Rigidbody2D.velocity.y);
                //// And then smoothing it out and applying it to the character
                //m_Rigidbody2D.velocity = Vector3.SmoothDamp(m_Rigidbody2D.velocity, targetVelocity, ref m_Velocity, m_MovementSmoothing);

                Vector2 targetVelocity = new Vector2(move * runSpeed, 0);
                Vector2 velocityChange = targetVelocity - m_Rigidbody2D.velocity;

                velocityChange.x = Mathf.Clamp(velocityChange.x, -maxVelocityChange, maxVelocityChange);
                velocityChange.y = 0;

                m_Rigidbody2D.AddForce(velocityChange, ForceMode2D.Impulse);
            }

			if (move > 0 && !m_FacingRight)
			{
				Flip();
			}

			else if (move < 0 && m_FacingRight)
			{
				Flip();
			}
		}
		if (jump)
		{
            // Add a vertical force to the player.
			m_Grounded = false;
            if (jumpingOnSlope)
            {
                m_Rigidbody2D.velocity = Vector2.zero;
                m_Rigidbody2D.AddForce( Vector2.up * (m_JumpForce - m_Rigidbody2D.velocity.y), ForceMode2D.Impulse);
                jumpingOnSlope = false;
            }               
            else
                m_Rigidbody2D.AddForce(Vector2.up * m_JumpForce, ForceMode2D.Impulse);
		}
        else if (!m_Grounded && doubleJump)
        {
            m_Grounded = false;
            m_Rigidbody2D.velocity = Vector2.zero;
            m_Rigidbody2D.AddForce(Vector2.up * m_JumpForce, ForceMode2D.Impulse);
        }
    }


    private void ClimbUp()
    {
        Vector3 targetVelocity;
        targetVelocity = new Vector3(-charMovement.slope.x * 8f, transform.up.y, 0);
        m_Rigidbody2D.velocity = Vector3.SmoothDamp(m_Rigidbody2D.velocity, targetVelocity, ref m_Velocity, m_MovementSmoothing);
    }

    private void ClimbDown()
    {
        Vector3 targetVelocity;
        targetVelocity = new Vector3(transform.forward.x, -charMovement.slope.y * 8, 0);
        m_Rigidbody2D.velocity = Vector3.SmoothDamp(m_Rigidbody2D.velocity, targetVelocity, ref m_Velocity, m_MovementSmoothing);
    }
    private void Flip()
    {
        if (canFlip)
        {
            // Switch the way the player is labelled as facing.
            m_FacingRight = !m_FacingRight;

            // Multiply the player's x local scale by -1.
            Vector3 theScale = transform.localScale;
            theScale.x *= -1;
            transform.localScale = theScale;
        }		
	}

    public bool FacingRight()
    {
        return m_FacingRight;
    }

    public void SetGravity(float gravityScale)
    {
        m_Rigidbody2D.velocity = Vector2.zero;
        m_Rigidbody2D.gravityScale = gravityScale;
        if(isGravityUsedInAnim)
            isGravityUsedInAnim = false;
        else
            isGravityUsedInAnim = true;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            RaycastHit2D hit = Physics2D.Raycast(GroundCheck.position, Vector2.down, 0.25f, m_WhatIsGround);
            if (hit)
                charMovement.playLandParticle();
        }
    }
}
