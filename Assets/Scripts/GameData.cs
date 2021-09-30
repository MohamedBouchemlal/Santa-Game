﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public PlayerData playerData;
    public LevelData[] levelsData;
    public GiftsData giftsData;
    public CoinsData coinsData;
    public Shop shopData;

    public GameData()
    {
        playerData.doubleJump = false;
        playerData.rangeWeapon = false;
        playerData.powerUp = false;
        playerData.MaxHealth = 0;
        playerData.MaxEnergy = 0;
        playerData.MeleeDamage = 0;
        playerData.BulletDamage = 0;

        giftsData.collectedGifts = 0;
        giftsData.GiftsIDs = new List<int>();
        coinsData.collectedCoins = 0;

        levelsData = new LevelData[22];
        for (int i = 0; i < levelsData.Length; i++)
        {
            levelsData[i].Index = i;

            if (i <= 7)
            {
                levelsData[i].Act = 1;
                levelsData[i].Name = "Level" + i;
            }
            else if (i > 7 && i <= 12) //Change 12 maybe
            {
                levelsData[i].Act = 1;
                levelsData[i].Name = "Level" + (i-7);
            }
            else if (i > 7 && i <= 21)//Change 21 maybe
            {
                levelsData[i].Act = 2;
                levelsData[i].Name = "Level" + (i - 12);
            }

            if(i==0)
                levelsData[i].Locked = false;
            else
                levelsData[i].Locked = true;

            levelsData[i].CollectedGifts = 0;
        }

        shopData.HealthUpgradeLevels = new bool[3];
        shopData.EnergyUpgradeLevels = new bool[3];
        shopData.SwordUpgradeLevels = new bool[3];
        shopData.GunUpgradeLevels = new bool[3];
    }

    public struct PlayerData
    {
        public float MaxHealth;
        public float MaxEnergy;
        public float MeleeDamage;
        public float BulletDamage;

        public bool doubleJump;
        public bool rangeWeapon;
        public bool powerUp;
    }

    public struct LevelData
    {
        public string Name;
        public int Index;
        public int Act;
        public bool Locked;
        public int CollectedGifts;
    }

    public struct GiftsData
    {
        public int collectedGifts;
        public List<int> GiftsIDs;
    }

    public struct CoinsData
    {
        public int collectedCoins;
    }

    public struct Shop
    {
        public bool[] HealthUpgradeLevels;
        public bool[] EnergyUpgradeLevels;
        public bool[] SwordUpgradeLevels;
        public bool[] GunUpgradeLevels;
    }
}

