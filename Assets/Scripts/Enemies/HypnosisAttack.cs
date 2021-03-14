using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HypnosisAttack : MonoBehaviour
{
    [SerializeField] float damage;
    private GameObject player;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            player.GetComponent<PlayerBehaviour>().TakeDamage(damage, Vector2.zero, 0f);
        }
    }
}
