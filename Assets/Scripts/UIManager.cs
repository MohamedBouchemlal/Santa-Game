﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine;

public class UIManager : Singleton<UIManager>
{
    [SerializeField] TextMeshProUGUI nr_Gifts_UI;
    [SerializeField] TextMeshProUGUI nr_Coins_UI;
    [SerializeField] GameObject coinIcon;
    private Vector3 coinAnimationScale = new Vector3(1.5f, 1.5f, 0);

    [SerializeField] GameObject gameOverPanel;
    [SerializeField] GameObject levelCompletePanel;

    

    public void UpdateGiftUI(int giftNumber, int maxGiftNumber)
    {
        nr_Gifts_UI.text = giftNumber.ToString() + "/" + maxGiftNumber.ToString();        
    }

    public void UpdateCoinUI(int coinNumber)
    {
        nr_Coins_UI.text = coinNumber.ToString();
        LeanTween.scale(coinIcon, coinAnimationScale, 0.1f).setLoopPingPong(1).setOnComplete(()=>{
            LeanTween.scale(coinIcon, Vector3.one, 0.1f);
        });
    }

    public void UpdateCoinUIOnStart(int coinNumber)
    {
        nr_Coins_UI.text = coinNumber.ToString();
    }

    public void GameOver(bool _continue)
    {
        if (_continue)
            GameOver_Continue();
        else
            GameOver_Retry();
    }

   void GameOver_Continue()
    {
        gameOverPanel.SetActive(true);
        gameOverPanel.transform.GetChild(0).gameObject.SetActive(true);
        gameOverPanel.transform.GetChild(1).gameObject.SetActive(false);
    }

    void GameOver_Retry()
    {
        gameOverPanel.SetActive(true);
        gameOverPanel.transform.GetChild(1).gameObject.SetActive(true);
        gameOverPanel.transform.GetChild(0).gameObject.SetActive(false);
    }

    public void Button_Continue()
    {
        gameOverPanel.SetActive(false);
    }
    public void Button_Retry()
    {
        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel(myLevel);
    }
    public void Button_NextLevel(int level)
    {
        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel("Level "+ level);
    }

    public void DisplayLevelComplete()
    {
        levelCompletePanel.SetActive(true);
    }
}
