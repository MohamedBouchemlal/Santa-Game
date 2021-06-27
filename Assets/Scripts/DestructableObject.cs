using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestructableObject : MonoBehaviour
{
    [SerializeField] float maxHealth;
    private float health;
    public float Health { get{ return health; } }
    private Animator anim;
    [SerializeField] ParticleSystem woodBreak;

    [Header("Audio")]
    [SerializeField] AudioClip woodHitClip;
    [SerializeField] AudioClip woodExploideClip;
    private AudioSource myAS;

    void Awake()
    {
        health = maxHealth;
        anim = GetComponent<Animator>();
        myAS = GetComponent<AudioSource>();
    }

    public void TakeDamage(float damage)
    {
        CameraShaker.Instance.ShakeCamera(0.2f, 0.05f, 0);
        myAS.PlayOneShot(woodHitClip);
        anim.SetTrigger("TakeDamage");
        health -= damage;
        if (health <= 0)
            Die();
    }

    void Die()
    {
        myAS.PlayOneShot(woodExploideClip);
        GetComponent<SpriteRenderer>().enabled = false;
        Instantiate(woodBreak, transform.position, woodBreak.transform.rotation);
        GetComponent<DropItemSpawner>().DropRandomItem();
        StartCoroutine(DieEnum());
    }

    IEnumerator DieEnum()
    {
        while (myAS.isPlaying)
        {           
            yield return null;
        }     
        Destroy(gameObject);
    }

    //Not used in mobile project
    //IEnumerator DamageAnimation(float waitTime)
    //{
    //    float elapsedTime = 0;
    //    while (elapsedTime < waitTime)
    //    {
    //        bloom_Material.SetFloat("_Emission", Mathf.Lerp(0, bloomValue, elapsedTime / waitTime));
    //        elapsedTime += Time.deltaTime;
    //        yield return null;
    //    }
    //    bloom_Material.SetFloat("_Emission", bloomValue);
    //    elapsedTime = 0;

    //    while (elapsedTime < waitTime)
    //    {
    //        bloom_Material.SetFloat("_Emission", Mathf.Lerp(bloomValue, 0, elapsedTime / waitTime));
    //        elapsedTime += Time.deltaTime;
    //        yield return null;
    //    }
    //    bloom_Material.SetFloat("_Emission", 0);
    //}

}
