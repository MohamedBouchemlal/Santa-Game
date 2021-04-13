using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine;

public class LevelManager : MonoBehaviour
{

    private int nr_Gifts;
    private int current_Nr_Gifts;

    private int nr_Coins;

    //Scripts
    private UIManager UI_Manager;

    //Events
    //public event Action deathEvent;

    void Start()
    {
        nr_Gifts = GameObject.FindGameObjectsWithTag("Gift").Length;
        current_Nr_Gifts = 0;
        nr_Coins = 0;       
        UI_Manager = FindObjectOfType<UIManager>();
        UI_Manager.UpdateGiftUI(current_Nr_Gifts, nr_Gifts);
        UI_Manager.UpdateCoinUI(nr_Coins);
    }

    public void CollectGift()
    {
        if(current_Nr_Gifts < nr_Gifts)
        {
            current_Nr_Gifts++;
            UI_Manager.UpdateGiftUI(current_Nr_Gifts, nr_Gifts);
        }
        else
            Debug.Log("More Gifts than usual");
    }

    public void CollectCoin()
    {
        nr_Coins++;
        UI_Manager.UpdateCoinUI(nr_Coins);
    }
}
