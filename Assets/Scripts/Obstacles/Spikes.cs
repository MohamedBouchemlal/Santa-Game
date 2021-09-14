using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spikes : MonoBehaviour
{
    [SerializeField] float damage;
    [SerializeField] float damageForce;
    [SerializeField] float timeBtwDamage;
    [Header("PopUp")]
    [SerializeField] bool doesPopUp;
    [SerializeField] float timeBetweenPopUp;
    [SerializeField] float y_PopupOffset;
    private float popUpTimer;
    private float damageTimer;
    private float initialY;
    private Transform myTransform;
    private BoxCollider2D bC2D;

    private void Start()
    {
        damageTimer = 0;
        popUpTimer = timeBetweenPopUp;
        myTransform = transform;
        initialY = myTransform.position.y;
        bC2D = GetComponent<BoxCollider2D>();
        PlayerStatus.OnDeathEvent += DisableCollider;
        PlayerStatus.OnReviveEvent += EnableCollider;
    }

    private void Update()
    {
        damageTimer -= Time.deltaTime;
        if (doesPopUp)
        {
            popUpTimer -= Time.deltaTime;
        }
        if (doesPopUp && popUpTimer <= 0)
            PopUp();
    }

    void DisableCollider()
    {
        bC2D.enabled = false;
    }

    void EnableCollider()
    {
        bC2D.enabled = true;
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

    void PopUp()
    {
        bC2D.enabled = true;
        myTransform.LeanMoveY(initialY + y_PopupOffset, 0.15f).setOnComplete(()=>{
            StartCoroutine(PopUpEnum());
        });
    }
    IEnumerator PopUpEnum()
    {
        yield return new WaitForSeconds(2f);
        myTransform.LeanMoveY(initialY, 0.15f);
        popUpTimer = timeBetweenPopUp;
        bC2D.enabled = false;
    }

    private void OnDestroy()
    {
        PlayerStatus.OnDeathEvent -= DisableCollider;
        PlayerStatus.OnReviveEvent -= EnableCollider;
    }
}
