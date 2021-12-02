using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Yodo1.MAS;

public class AdsManagerMAS : Singleton<AdsManagerMAS>
{
    public Action OnRewardedVideoFinished;

    void Start()
    {
        Yodo1U3dMas.InitializeSdk();

        InitializeInterstitialAds();
        InitializeRewardedAds();
    }

    //Interstitial Ads
    private void InitializeInterstitialAds()
    {
        Yodo1U3dMasCallback.Interstitial.OnAdOpenedEvent +=
        OnInterstitialAdOpenedEvent;
        Yodo1U3dMasCallback.Interstitial.OnAdClosedEvent +=
        OnInterstitialAdClosedEvent;
        Yodo1U3dMasCallback.Interstitial.OnAdErrorEvent +=
        OnInterstitialAdErorEvent;
    }

    private void OnInterstitialAdOpenedEvent()
    {
        Debug.Log("[Yodo1 Mas] Interstitial ad opened");
    }

    private void OnInterstitialAdClosedEvent()
    {
        Debug.Log("[Yodo1 Mas] Interstitial ad closed");
    }

    private void OnInterstitialAdErorEvent(Yodo1U3dAdError adError)
    {
        Debug.Log("[Yodo1 Mas] Interstitial ad error - " + adError.ToString());
    }

    public void ShowInterstitial()
    {
        if(Yodo1U3dMas.IsInterstitialAdLoaded())
            Yodo1U3dMas.ShowInterstitialAd();
    }


    //Rewarded Ads
    private void InitializeRewardedAds()
    {
        // Add Events
        Yodo1U3dMasCallback.Rewarded.OnAdOpenedEvent += OnRewardedAdOpenedEvent;
        Yodo1U3dMasCallback.Rewarded.OnAdClosedEvent += OnRewardedAdClosedEvent;
        Yodo1U3dMasCallback.Rewarded.OnAdReceivedRewardEvent += OnAdReceivedRewardEvent;
        Yodo1U3dMasCallback.Rewarded.OnAdErrorEvent += OnRewardedAdErorEvent;
    }

    private void OnRewardedAdOpenedEvent()
    {
        Debug.Log("[Yodo1 Mas] Rewarded ad opened");
    }

    private void OnRewardedAdClosedEvent()
    {
        Debug.Log("[Yodo1 Mas] Rewarded ad closed");
    }

    private void OnAdReceivedRewardEvent()
    {
        Debug.Log("[Yodo1 Mas] Rewarded ad received reward");
        OnRewardedVideoFinished?.Invoke();
    }

    private void OnRewardedAdErorEvent(Yodo1U3dAdError adError)
    {
        Debug.Log("[Yodo1 Mas] Rewarded ad error - " + adError.ToString());
    }

    public void ShowRewardedVideo()
    {
        if(Yodo1U3dMas.IsRewardedAdLoaded())
            Yodo1U3dMas.ShowRewardedAd();
    }
}
