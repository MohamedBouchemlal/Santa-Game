using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UpgradeBar : MonoBehaviour
{
    [SerializeField] Image[] levelBoxes;
    [SerializeField] TextMeshProUGUI[] levelTexts;
    [SerializeField] float[] levelValues;
    [SerializeField] int[] prices;
    [SerializeField] TextMeshProUGUI priceText;
    [SerializeField] Button buyButton;
    [SerializeField] GameObject notEnoughCoins;
    [SerializeField] Color green;
    [SerializeField] Color black;
    [SerializeField] GameObject lockedPanel;

    int currentPrice;
    float currentValue;
    int unlockIndex;

    UpgradeBar[] otherUpgradeBars;

    void Start()
    {
        otherUpgradeBars = FindObjectsOfType<UpgradeBar>();
        InitializeUpgradeBarInfo();
        UpdateOwnUpgradeBarInfo();
    }

    public void BuyUpgradeLevel()
    {
        if (DataManager.Instance.gameDataSave.coinsData.collectedCoins >= currentPrice)
        {
            switch (gameObject.name)
            {
                case "Health":
                    DataManager.Instance.gameDataSave.playerData.MaxHealth = currentValue;
                    DataManager.Instance.gameDataSave.shopData.HealthUpgradeLevels[unlockIndex] = true;
                    DataManager.Instance.gameDataSave.coinsData.collectedCoins -= currentPrice;                   
                    break;
                case "Energy":
                    DataManager.Instance.gameDataSave.playerData.MaxEnergy = currentValue;
                    DataManager.Instance.gameDataSave.shopData.EnergyUpgradeLevels[unlockIndex] = true;
                    DataManager.Instance.gameDataSave.coinsData.collectedCoins -= currentPrice;
                    break;
                case "Sword":
                    DataManager.Instance.gameDataSave.playerData.MeleeDamage = currentValue;
                    DataManager.Instance.gameDataSave.shopData.SwordUpgradeLevels[unlockIndex] = true;
                    DataManager.Instance.gameDataSave.coinsData.collectedCoins -= currentPrice;                   
                    break;
                case "Gun":
                    DataManager.Instance.gameDataSave.playerData.BulletDamage = currentValue;
                    DataManager.Instance.gameDataSave.shopData.GunUpgradeLevels[unlockIndex] = true;
                    DataManager.Instance.gameDataSave.coinsData.collectedCoins -= currentPrice;
                    Debug.Log(DataManager.Instance.gameDataSave.playerData.rangeWeapon);                   
                    break;
            }
            DataManager.Instance.Save();
            UpdateAllUpgradeBars();
        }
    }

    public void UpdateOwnUpgradeBarInfo()
    {      
        switch (gameObject.name)
        {         
            case "Health":
                for (int i = 0; i < levelBoxes.Length; i++)
                {
                    if (DataManager.Instance.gameDataSave.shopData.HealthUpgradeLevels[i])
                    {
                        levelBoxes[i].color = green;
                        levelTexts[i].color = black;
                        if (i == 2)
                            buyButton.gameObject.SetActive(false);
                    }
                    else
                    {
                        currentPrice = prices[i];
                        priceText.text = currentPrice.ToString();
                        currentValue = levelValues[i];
                        unlockIndex = i;
                        break;
                    }
                }
                break;
            case "Energy":
                for (int i = 0; i < levelBoxes.Length; i++)
                {
                    if (DataManager.Instance.gameDataSave.shopData.EnergyUpgradeLevels[i])
                    {
                        levelBoxes[i].color = green;
                        levelTexts[i].color = black;
                        if (i == 2)
                            buyButton.gameObject.SetActive(false);
                    }
                    else
                    {
                        currentPrice = prices[i];
                        priceText.text = currentPrice.ToString();
                        currentValue = levelValues[i];
                        unlockIndex = i;
                        break;
                    }
                }
                if (DataManager.Instance.gameDataSave.playerData.rangeWeapon)
                {
                    lockedPanel.SetActive(false);
                    buyButton.interactable = true;
                }
                break;
            case "Sword":
                for (int i = 0; i < levelBoxes.Length; i++)
                {
                    if (DataManager.Instance.gameDataSave.shopData.SwordUpgradeLevels[i])
                    {
                        levelBoxes[i].color = green;
                        levelTexts[i].color = black;
                        if (i == 2)
                            buyButton.gameObject.SetActive(false);
                    }
                    else
                    {
                        currentPrice = prices[i];
                        priceText.text = currentPrice.ToString();
                        currentValue = levelValues[i];
                        unlockIndex = i;
                        break;
                    }
                }
                break;
            case "Gun":
                for (int i = 0; i < levelBoxes.Length; i++)
                {
                    if (DataManager.Instance.gameDataSave.shopData.GunUpgradeLevels[i])
                    {
                        levelBoxes[i].color = green;
                        levelTexts[i].color = black;
                        if (i == 2)
                            buyButton.gameObject.SetActive(false);
                    }
                    else
                    {
                        currentPrice = prices[i];
                        priceText.text = currentPrice.ToString();
                        currentValue = levelValues[i];
                        unlockIndex = i;
                        break;
                    }
                }
                if (DataManager.Instance.gameDataSave.playerData.rangeWeapon)
                {
                    lockedPanel.SetActive(false);
                    buyButton.interactable = true;
                }
                break;
        }
        if (DataManager.Instance.gameDataSave.coinsData.collectedCoins < currentPrice)
        {
            notEnoughCoins.SetActive(true);
            buyButton.interactable = false;
        }
        else
        {
            notEnoughCoins.SetActive(false);
            buyButton.interactable = true;
        }
    }

    void InitializeUpgradeBarInfo()
    {
        for (int i = 0; i < levelBoxes.Length; i++)
        {
            levelTexts[i].text = levelValues[i].ToString();
        }
    }

    void UpdateAllUpgradeBars()
    {
        foreach (UpgradeBar UB in otherUpgradeBars)
            UB.UpdateOwnUpgradeBarInfo();
    }

    //For testing
    public void Test_GainExtraCoins()
    {
        DataManager.Instance.gameDataSave.coinsData.collectedCoins += 100; //After rewarded video
        DataManager.Instance.Save();
        UpdateAllUpgradeBars();
    }

    public void Test_ResetUpdates()
    {
        DataManager.Instance.gameDataSave.shopData.HealthUpgradeLevels = null;
        DataManager.Instance.gameDataSave.shopData.EnergyUpgradeLevels = null;
        DataManager.Instance.gameDataSave.shopData.SwordUpgradeLevels = null;
        DataManager.Instance.gameDataSave.shopData.GunUpgradeLevels = null;
        DataManager.Instance.Save();
        UpdateOwnUpgradeBarInfo();
    }
}
