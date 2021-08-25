using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnemyHealth : MonoBehaviour
{
    [SerializeField] float max_Health;
    private float health;
    public float Health { get { return health; } }
    [SerializeField] HealthBar my_HealthBar;
    [SerializeField] ParticleSystem dieParticle;
    private GameObject healBar_UI;
    private bool showingHealth;

    [SerializeField] UnityEvent OnTakeDamageEvent;
    [SerializeField] UnityEvent OnDieEvent;

    void Start()
    {       
        health = max_Health;
        my_HealthBar.SetMaxHealthBar(max_Health);
        healBar_UI = my_HealthBar.gameObject;
        healBar_UI.SetActive(false);
    }

    public void ReduceHealth(float damage)
    {
        StartCoroutine(ShowHealth(1f));
        health -= damage;
        if (health <= 0)
        {
            Die();
        }
        my_HealthBar.SetHealthBar(health);
    }

    void Die()
    {
        //CameraShaker.instance.ZoomIn(0.2f, transform);
        CameraShaker.Instance.ShakeCamera(0.4f, 0.3f, 0);

        healBar_UI.SetActive(false);

        if (dieParticle) {
            InstantiateDieParticles();
        }

        OnDieEvent.Invoke();
    }
    
    public void TakeDamage(float damage)
    {
        if (CompareTag("Boss") && !GetComponent<Boss>().vulnerable)
            return;
        else
        {
            ReduceHealth(damage);
            OnTakeDamageEvent.Invoke();
        }
    }

    public void InstantiateDieParticles()
    {
        ParticleSystem ps = Instantiate(dieParticle, transform);
        ps.transform.SetParent(null);
        ps.transform.localScale = new Vector3(1, 1, 1);
    }

    IEnumerator ShowHealth(float time)
    {
        if (showingHealth)
            StopAllCoroutines();
        else
        {
            showingHealth = true;
            healBar_UI.SetActive(true);
            yield return new WaitForSeconds(time);
            healBar_UI.SetActive(false);
            showingHealth = false;
        }      
    }
}
