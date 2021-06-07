using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public PlayerData playerData;
    public LevelData[] levelsData;
    public GiftsData giftsData;
    public CoinsData coinsData;

    public GameData(float health, float energy, float meleeDamage, float bulletDamage, float energyConsumption)
    {
        playerData.MaxHealth = health;
        playerData.MaxEnergy = energy;
        playerData.MeleeDamage = meleeDamage;
        playerData.BulletDamage = bulletDamage;
        playerData.EnergyConsumption = energyConsumption;

        playerData.doubleJump = false;
        playerData.rangeWeapon = false;
        playerData.powerUp = false;
    }

    public struct PlayerData
    {
        public float MaxHealth;
        public float MaxEnergy;
        public float MeleeDamage;
        public float BulletDamage;
        public float EnergyConsumption;

        public bool doubleJump;
        public bool rangeWeapon;
        public bool powerUp;
    }

    public struct LevelData
    {
        public string Title;
        public int Index;
        public int Act;
        public bool Locked;
        public int CollectedGifts;
    }

    public struct GiftsData
    {
        public int GiftsNumber;
    }

    public struct CoinsData
    {
        public int CoinsNumber;
    }
}
