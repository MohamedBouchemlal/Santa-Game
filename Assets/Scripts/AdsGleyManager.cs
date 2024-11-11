using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Gley.MobileAds;
using UnityEngine.Events;

public class AdsGleyManager : Singleton<AdsGleyManager>
{
    public bool isInterstitialLoaded;

    public Action OnRewardedVideoFinished;

    private void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(this.gameObject);

        isInterstitialLoaded = false;

        API.Initialize();
        Gley.MobileAds.Events.onInterstitialLoadFailed += x => { Time.timeScale = 1; };
        Gley.MobileAds.Events.onInterstitialLoadSucces += () => { isInterstitialLoaded = true; };
    }


    #region Banner
    public void CreateBannerView()
    {

    }
    public void ShowBannerAd()
    {
        API.ShowBanner(BannerPosition.Bottom, BannerType.Banner);
    }
    public void DestroyBannerView()
    {

    }
    #endregion

    #region Interstitial
    public void LoadInterstitialAd()
    {

    }
    public void ShowInterstitialAd()
    {
        API.ShowInterstitial();
    }

    private void RegisterReloadHandlerInterstitial()
    {

    }
    #endregion

    #region Rewarded
    public void LoadRewardedAd()
    {

    }

    public void ShowRewardedAd(UnityAction<bool> RewardingFunction)
    {
        API.ShowRewardedVideo(RewardingFunction);
    }

    private void RegisterReloadHandlerRewarded()
    {

    }
    #endregion
}
