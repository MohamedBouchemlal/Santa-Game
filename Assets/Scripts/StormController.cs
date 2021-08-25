using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StormController : MonoBehaviour
{
    [Header("Attributes")]
    [SerializeField] float windForce;
    [SerializeField] float stormActiveDuration;
    [SerializeField] float stormPauseDuration;
    [SerializeField] float particlesXForce;
    private float stormAD;
    private float stormPD;
    private Vector2 v2WindForce;

    [Header("Particles")]
    [SerializeField] ParticleSystem PS_StormSnow;
    [SerializeField] ParticleSystem PS_StormSnowBig;
    private Rigidbody2D playerRB;
    private PlayerBehaviour playerBehavior;
    private bool active;
    private bool blowRight;

    [Header("Audio")]
    [SerializeField] AudioSource myAS;

    void Awake()
    {
        active = false;
        blowRight = true;
        playerRB = GameObject.FindWithTag("Player").GetComponent<Rigidbody2D>();
        stormAD = stormActiveDuration;
        stormPD = stormPauseDuration;
        v2WindForce = new Vector2(windForce, 0);
        playerBehavior = FindObjectOfType<PlayerBehaviour>();
    }

    void Update()
    {
        if (stormAD <= 0)
        {
            
            active = false;
            stormAD = stormActiveDuration;

            blowRight = blowRight? false : true;
        }
        if (stormPD <= 0)
        {
            myAS.Play();
            active = true;
            stormPD = stormPauseDuration;
        }
    }
    private void FixedUpdate()
    {
        var sFStorm = PS_StormSnow.forceOverLifetime;
        var sFStormBig = PS_StormSnowBig.forceOverLifetime;

        if (active)
        {
            stormAD -= Time.fixedDeltaTime;
            if (!playerBehavior.TakingDamage)
            {
                if (blowRight)
                {

                    playerRB.AddForce(v2WindForce, ForceMode2D.Force);
                    sFStorm.x = particlesXForce;
                    sFStormBig.x = particlesXForce;
                }
                else
                {
                    playerRB.AddForce(-v2WindForce, ForceMode2D.Force);
                    sFStorm.x = -particlesXForce;
                    sFStormBig.x = -particlesXForce;
                }
            }
        }
        else
        {
            sFStorm.x = 0;
            sFStormBig.x = 0;
            stormPD -= Time.fixedDeltaTime;
        }
    }
}
