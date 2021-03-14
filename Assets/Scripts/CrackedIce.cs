using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrackedIce : MonoBehaviour
{
    public float enduranceTime;
    public float resetTime;
    private float e_Time;
    private float r_Time;
    public ParticleSystem fallingIce;

    private bool startFallCountdown;
    private bool fell;

    Animator anim;

    void Awake()
    {
        startFallCountdown = false;
        fell = false;
        e_Time = enduranceTime;
        r_Time = resetTime;
        anim = GetComponent<Animator>();
    }

    private void Update()
    {
        if(startFallCountdown)
            e_Time -= Time.deltaTime;

        if (e_Time <= 0)
            Fall();

        if (fell)
            r_Time -= Time.deltaTime;

        if (fell && r_Time <= 0)
            Reset();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            anim.SetBool("StoodOn", true);
            startFallCountdown = true;
        }
    }


    void Fall()
    {
        startFallCountdown = false;
        e_Time = enduranceTime;
        Instantiate(fallingIce, transform.position, fallingIce.transform.rotation);
        fell = true;
        for (int i = 0; i < transform.childCount; i++)
            transform.GetChild(i).GetComponent<SpriteRenderer>().enabled = false;

        GetComponent<BoxCollider2D>().enabled = false;
    }
    void Reset()
    {
        anim.SetBool("StoodOn", false);

        e_Time = enduranceTime;
        r_Time = resetTime;
        fell = false;
        for (int i = 0; i < transform.childCount; i++)
            transform.GetChild(i).GetComponent<SpriteRenderer>().enabled = true;

        GetComponent<BoxCollider2D>().enabled = true;
    }
}
