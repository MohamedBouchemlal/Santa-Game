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
    public bool Fell { get => fell; }

    VerticalPlatform myVerticalPlatform;
    Animator anim;
    BoxCollider2D myCollider;
    SpriteRenderer[] iceChildren;

    [Header("Audio")]
    [SerializeField] AudioSource myAS;
    [SerializeField] AudioClip crackClip;
    [SerializeField] AudioClip fallClip; 

    void Awake()
    {
        startFallCountdown = false;
        fell = false;
        e_Time = enduranceTime;
        r_Time = resetTime;
        myVerticalPlatform = GetComponent<VerticalPlatform>();
        anim = GetComponent<Animator>();
        myCollider = GetComponent<BoxCollider2D>();
        iceChildren = new SpriteRenderer[transform.childCount];
        for (int i = 0; i < iceChildren.Length; i++)
            iceChildren[i] = transform.GetChild(i).GetComponent<SpriteRenderer>();
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
        myAS.PlayOneShot(fallClip);
        startFallCountdown = false;
        e_Time = enduranceTime;
        Instantiate(fallingIce, transform.position, fallingIce.transform.rotation);
        fell = true;
        for (int i = 0; i < iceChildren.Length; i++)
            iceChildren[i].enabled = false;

        myVerticalPlatform.enabled = false;
        myCollider.enabled = false;     
    }
    void Reset()
    {
        anim.SetBool("StoodOn", false);

        e_Time = enduranceTime;
        r_Time = resetTime;
        fell = false;
        for (int i = 0; i < iceChildren.Length; i++)
            iceChildren[i].enabled = true;

        myVerticalPlatform.enabled = true;
        myCollider.enabled = true;       
    }

    public void PlayCrackSound()
    {
        myAS.PlayOneShot(crackClip);
    }
}
