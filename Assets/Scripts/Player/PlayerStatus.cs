using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.Events;
using UnityEngine;

public class PlayerStatus : MonoBehaviour
{
    [Header("Health:")]
    [SerializeField] HealthBar my_HealthBar;
    [SerializeField] float max_Health;
    public float health;
    public ParticleSystem healingParticle;
    public ParticleSystem energyParticle;

    [Header("Energy:")]
    [SerializeField] HealthBar my_EnergyBar;
    [SerializeField] float max_Energy;
    public float energy;
    public float bullet_Costs;
    public float buff_Costs;
    private bool buffActivated;

    private Animator anim;

    //Events
    public static Action OnDeathEvent;
    public static Action OnGameOver;
    public static Action OnReviveEvent;

    void Awake()
    {
        
    }

    private void Start()
    {
        if (!(DataManager.Instance.gameDataSave.playerData.MaxHealth == 0))
            max_Health = DataManager.Instance.gameDataSave.playerData.MaxHealth;          

        if (!(DataManager.Instance.gameDataSave.playerData.MaxEnergy == 0))
            max_Energy = DataManager.Instance.gameDataSave.playerData.MaxEnergy;

        health = max_Health;
        energy = max_Energy;
        buffActivated = false;
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

        if (health <= 0)
        {
            OnDeathEvent?.Invoke();   
        }       
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

    public bool CollectGreenCandy(int amount)
    {
        if (health < max_Health)
        {
            AddHealth(amount);
            healingParticle.Play();
            return true;
        }
        return false;
    }

    public bool CollectRedCandy(int amount)
    {
        if (energy < max_Energy)
        {
            IncreaseEnergy(amount);
            energyParticle.Play();
            return true;
        }
        return false;
    }
    //used in animation (maybe)
    public void FireGameOver()
    {
        OnGameOver?.Invoke();
    }

    public void Revive()
    {
        health = 0;
        AddHealth(max_Health * 0.7f);
        OnReviveEvent?.Invoke();
    }
}
