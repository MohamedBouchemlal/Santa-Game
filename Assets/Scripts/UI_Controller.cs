using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine;

public class UI_Controller : MonoBehaviour
{
    public PlayerStatus player_Stats;

    public TextMeshProUGUI nr_Bullets_UI;

    public TextMeshProUGUI nr_Gifts_UI;
    void Start()
    {
        FindObjectOfType<PlayerStatus>().updateStatsEvent += UpdateUI;
        UpdateUI();
    }

    public void UpdateUI()
    {
        nr_Gifts_UI.text = player_Stats.Current_Nr_Gifts.ToString() + "/" + player_Stats.nr_Gifts.ToString();
    }
}
