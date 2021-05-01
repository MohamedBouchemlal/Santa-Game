using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestructableObject : MonoBehaviour
{
    [SerializeField] float maxHealth;
    private float health;
    public float Health { get{ return health; } }
    //[SerializeField] float bloomValue;
    //private SpriteRenderer sr;
    //private Material bloom_Material;
    private Animator anim;
    [SerializeField] ParticleSystem woodBreak;
    private DropItemSpawner dropItemSpawner;

    void Awake()
    {
        //sr = GetComponent<SpriteRenderer>();
        //bloom_Material = sr.material;
        health = maxHealth;
        anim = GetComponent<Animator>();
        dropItemSpawner = GetComponent<DropItemSpawner>();
    }

    public void TakeDamage(float damage)
    {
        CameraShaker.Instance.ShakeCamera(0.2f, 0.05f, 0);
        anim.SetTrigger("TakeDamage");
        health -= damage;
        if (health <= 0)
            Die();
    }

    void Die()
    {
        Instantiate(woodBreak, transform.position, woodBreak.transform.rotation);
        dropItemSpawner.DropRandomItem();
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
