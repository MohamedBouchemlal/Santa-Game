using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI nr_Gifts_UI;
    [SerializeField] TextMeshProUGUI nr_Coins_UI;
    [SerializeField] GameObject coinIcon;
    private Vector3 coinAnimationScale = new Vector3(1.5f, 1.5f, 0);


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

}
