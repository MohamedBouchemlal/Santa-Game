using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Xml;
using System.Xml.Serialization;

public class DataManager : Singleton<DataManager>
{

    //[Header("Initial Values")]
    //[Header("Player")]
    //[SerializeField] float maxHealth;
    //[SerializeField] float maxEnergy;
    //[SerializeField] float meleeDamage;
    //[SerializeField] float bulletDamage;
    //[SerializeField] float energyConsumption;

    public GameData gameDataSave;
    public bool hasLoaded;
    string dataPath;

    private void Awake()
    {
        base.Awake();

        dataPath = Application.persistentDataPath;

        if (File.Exists(dataPath + "/SaveFile.Save"))
            Load();
        else
            gameDataSave = new GameData();

        if (gameDataSave.shopData.HealthUpgradeLevels == null)
        {
            gameDataSave.playerData.MaxHealth = 0;
            gameDataSave.playerData.MaxEnergy = 0;
            gameDataSave.playerData.MeleeDamage = 0;
            gameDataSave.playerData.BulletDamage = 0;

            gameDataSave.shopData.HealthUpgradeLevels = new bool[3]; /// ????????
            gameDataSave.shopData.EnergyUpgradeLevels = new bool[3];
            gameDataSave.shopData.SwordUpgradeLevels = new bool[3];
            gameDataSave.shopData.GunUpgradeLevels = new bool[3]; /// ?????????
        }       
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
            Delete();
    }

    public void Save()
    {
        var serializer = new XmlSerializer(typeof(GameData));
        var stream = new FileStream(dataPath + "/SaveFile.Save", FileMode.Create);

        serializer.Serialize(stream, gameDataSave);
        stream.Close();

        Debug.Log("Saved");
    }

    public void Load()
    {
        if (File.Exists(dataPath + "/SaveFile.Save"))
        {
            var serializer = new XmlSerializer(typeof(GameData));
            var stream = new FileStream(dataPath + "/SaveFile.Save", FileMode.Open);

            gameDataSave = serializer.Deserialize(stream) as GameData;
            stream.Close();

            hasLoaded = true;
            Debug.Log("Loaded");
        }
        else
            Debug.Log("Save not found");
    }

    public void Delete()
    {
        if (File.Exists(dataPath + "/SaveFile.Save"))
        {
            File.Delete(dataPath + "/SaveFile.Save");

            Debug.Log("Deleted");
        }
    }

    public bool IsThereASave()
    {
        return File.Exists(dataPath + "/SaveFile.Save");
    }
}
