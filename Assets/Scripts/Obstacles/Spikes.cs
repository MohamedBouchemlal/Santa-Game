using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spikes : MonoBehaviour
{
    [SerializeField] float damage;
    [SerializeField] float damageForce;
    [SerializeField] float timeBtwDamage;
    private float damageTimer;

    private void Start()
    {
        damageTimer = 0;
    }

    private void Update()
    {
        damageTimer -= Time.deltaTime;
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        GameObject player;
        if (collision.CompareTag("Player"))
            player = collision.gameObject;
        else return;

        if (damageTimer <= 0)
        {
            player.GetComponent<PlayerBehaviour>().ResetVelocity();
            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, Vector2.up, damageForce, PlayerDamageSound.Spike);
            damageTimer = timeBtwDamage;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
            damageTimer = 0;
        else return;
    }
}
