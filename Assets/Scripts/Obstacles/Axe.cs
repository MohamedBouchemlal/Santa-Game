using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Axe : MonoBehaviour
{
    public float force;
    public float damage;
    [SerializeField] bool swingOpposite;

    [SerializeField] AudioSource audioSource;

    private float lastZRotation;
    private bool applyForceRight;

    private void Start()
    {
        if (swingOpposite)
            GetComponent<Animator>().Play("Axe_Swing_Opposite");
    }

    private void Update()
    {
        Invoke("DeterminOldZ", 0.1f);

        if (transform.rotation.eulerAngles.z > lastZRotation)
            applyForceRight = true;
        else
            applyForceRight = false;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            GameObject player = collision.gameObject;           
            Vector2 forceDirection;          

            if (applyForceRight)
                forceDirection = player.transform.right;
            else
                forceDirection = -player.transform.right;

            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, forceDirection, force, PlayerDamageSound.Spike);

        }
    }

    void DeterminOldZ()
    {
        lastZRotation = transform.rotation.eulerAngles.z;
    }

    void PLaySwingSound()
    {
        audioSource.Play();
    }
}
