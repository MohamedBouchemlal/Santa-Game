using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : Singleton<DataManager>
{

    [Header("Initial Values")]
    [Header("Player")]
    [SerializeField] float maxHealth;
    [SerializeField] float maxEnergy;
    [SerializeField] float meleeDamage;
    [SerializeField] float bulletDamage;
    [SerializeField] float energyConsumption;

    public static GameData gameData;

    void Start()
    {
        //if file doesn't exist, read from initial values above. Create file and save those values in the file
        //else read from binary file

        gameData = new GameData(maxHealth, maxEnergy, meleeDamage, bulletDamage, energyConsumption);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
