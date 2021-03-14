using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class PlayerStatus : MonoBehaviour
{
    [Header("Health:")]
    public HealthBar my_HealthBar;
    public float max_Health;
    private float health;   
    public ParticleSystem healingParticle;
    public ParticleSystem energyParticle;

    [Header("Energy:")]   
    public HealthBar my_EnergyBar;
    public float max_Energy;
    private float energy;
    public float bullet_Costs;
    public float buff_Costs;
    private bool buffActivated;

    [Header("Gifts")]
    public int nr_Gifts;
    private int current_Nr_Gifts;
    public int Current_Nr_Gifts { get { return current_Nr_Gifts; } }

    private Animator anim;

    //Events
    public event Action deathEvent;
    public event Action updateStatsEvent;

    void Awake()
    {
        health = max_Health;
        energy = max_Energy;
        buffActivated = false;
        current_Nr_Gifts = 0;
        my_HealthBar.SetMaxHealthBar(max_Health);
        my_EnergyBar.SetMaxHealthBar(max_Energy);
        anim = GetComponent<Animator>();
    }

    private void Update()
    {
        if (buffActivated)
        {
            DecreaseEnergy("Buff");
        }
        if (energy <= 0 && buffActivated)
            anim.SetBool("Transform", false);
    }

    public bool CanUseEnergy()
    {
        if (energy <= 0)
            return false;
        else
            return true;
    }
    //Health
    public void AddHealth(float heal)
    {
        if (health + heal > max_Health)
            health = max_Health;
        else
            health += heal;
        my_HealthBar.SetHealthBar(health);
    }
    public void ReduceHealth(float damage)
    {
        health -= damage;
        my_HealthBar.SetHealthBar(health);

        if (health - damage <= 0)
            Debug.Log("Play die animation");      
    }

    private void IncreaseEnergy(float amount)
    {
        if (energy + amount > max_Energy)
            energy = max_Energy;
        else
            energy += amount;

        Mathf.Clamp(energy, 0, max_Energy);
        my_EnergyBar.SetHealthBar(energy);
    }

    public void DecreaseEnergy(string Costs)
    {
        if(Costs == "Bullet")
            energy -= bullet_Costs;
        if (Costs == "Buff")
            energy -= buff_Costs * Time.deltaTime;      

        Mathf.Clamp(energy, 0, max_Energy);
        my_EnergyBar.SetHealthBar(energy);
    }

    public void ActivateBuff()
    {
        buffActivated = true;
    }
    public void DeactivateBuff()
    {
        buffActivated = false;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        GameObject my_GameObject = collision.gameObject;
        string colliderTag = my_GameObject.tag.ToString();
        switch (colliderTag)
        {
            case "Gift":
                {
                    if (current_Nr_Gifts < nr_Gifts)
                    {
                        //play Animation                       
                        current_Nr_Gifts++;
                        my_GameObject.GetComponent<Gift>().MoveToUI();
                        updateStatsEvent();
                    }
                    else
                        Debug.Log("More Gifts than usual");
                }
                break;
            case "Green_Candy":
                {
                    if (health < max_Health)
                    {
                        AddHealth(10);
                        healingParticle.Play();
                        Destroy(my_GameObject);
                    }
                    break;
                }
            case "Big_Green_Candy":
                {
                    if (health < max_Health)
                    {
                        AddHealth(30);
                        healingParticle.Play();
                        Destroy(my_GameObject);
                    }
                    break;
                }
            case "Red_Candy":
                {
                    if (energy < max_Energy)
                    {
                        IncreaseEnergy(25);
                        energyParticle.Play();
                        Destroy(my_GameObject);
                    }
                    break;
                }
            case "Big_Red_Candy":
                {
                    if (energy < max_Energy)
                    {
                        IncreaseEnergy(50);
                        energyParticle.Play();
                        Destroy(my_GameObject);
                    }
                    break;
                }
        }
    }
}
