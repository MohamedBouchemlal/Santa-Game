using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using GoogleMobileAds;
using System;
public class AdsManager : Singleton<AdsManager>
{
    [Header("Banner")]
    [SerializeField] string androidBannerID;
    [SerializeField] string iosBannerID;
    string bannerID;
    BannerView _bannerView;

    [Header("Interstitial")]
    [SerializeField] string androidInterstitialID;
    [SerializeField] string iosInterstitialID;
    string interstitialID;
    InterstitialAd interstitialAd;
    public bool isInterstitialLoaded;
    public int noAdBetweenInterstitial = 1;
    int noAdBetweenInterstitialHolder;

    [Header("Rewarded")]
    [SerializeField] string androidRewardedID;
    [SerializeField] string iosRewardedID;
    string rewardedID;
    private RewardedAd _rewardedAd;

    [Header("Rewarded Interstitial")]
    [SerializeField] string androidRewardedInterstitialID;
    [SerializeField] string iosRewardedInterstitialID;
    string rewardedInterstitialID;
    private RewardedInterstitialAd rewardedInterstitialAd;


    private void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(this.gameObject);

        MobileAds.RaiseAdEventsOnUnityMainThread = true;

        if (Application.platform == RuntimePlatform.Android)
        {
            bannerID = androidBannerID;
            interstitialID = androidInterstitialID;
            rewardedID = androidRewardedID;
            rewardedInterstitialID = androidRewardedInterstitialID;
        }
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            bannerID = iosBannerID;
            interstitialID = iosInterstitialID;
            rewardedID = iosRewardedID;
            rewardedInterstitialID = iosRewardedInterstitialID;
        }

        MobileAds.Initialize(initStatus =>
        {
            Debug.Log("SDK initialized");
            CreateBannerView();
            LoadAndShowBannerAd();

            interstitialAd = null;
            LoadInterstitialAd();
            RegisterReloadHandler(interstitialAd);

            _rewardedAd = null;
            LoadRewardedAd();
            RegisterReloadHandler(_rewardedAd);

            rewardedInterstitialAd = null;
            LoadRewardedInterstitialAd();
            RegisterReloadHandler(rewardedInterstitialAd);

        });
        noAdBetweenInterstitialHolder = noAdBetweenInterstitial;
    }

    #region Banner
    public void CreateBannerView()
    {
        Debug.Log("Creating banner view");

        if (_bannerView != null)
            DestroyBannerView();

        // Create a 320x50 banner at top of the screen
        _bannerView = new BannerView(bannerID, AdSize.Banner, AdPosition.Bottom);
    }
    public void LoadAndShowBannerAd()
    {
        if (_bannerView == null)
            CreateBannerView();

        var adRequest = new AdRequest();

        Debug.Log("Loading banner ad.");
        _bannerView.LoadAd(adRequest);
    }
    public void DestroyBannerView()
    {
        if (_bannerView != null)
        {
            Debug.Log("Destroying banner view.");
            _bannerView.Destroy();
            _bannerView = null;
        }
    }
    #endregion

    #region Interstitial
    public void LoadInterstitialAd()
    {
        // Clean up the old ad before loading a new one.
        if (interstitialAd != null)
        {
            interstitialAd.Destroy();
            interstitialAd = null;
        }

        Debug.Log("Loading the interstitial ad.");

        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        InterstitialAd.Load(interstitialID, adRequest,
            (InterstitialAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("interstitial ad failed to load an ad " +
                                   "with error : " + error);
                    return;
                }

                Debug.Log("Interstitial ad loaded with response : "
                          + ad.GetResponseInfo());

                interstitialAd = ad;
                RegisterReloadHandler(interstitialAd);
            });
    }
    public bool ShowInterstitialAd()
    {
        Debug.Log(noAdBetweenInterstitialHolder);
        if (interstitialAd != null && interstitialAd.CanShowAd() && noAdBetweenInterstitialHolder <= 0)
        {
            Debug.Log("Showing interstitial ad.");
            interstitialAd.Show();
            LoadInterstitialAd();
            noAdBetweenInterstitialHolder = noAdBetweenInterstitial;
            return true;
        }
        else
        {           
            Debug.Log("Interstitial ad is not ready yet."); 
            LoadInterstitialAd();
            noAdBetweenInterstitialHolder--;
            return false;      
        }
    }

    private void RegisterReloadHandler(InterstitialAd interstitialAd)
    {
        // Raised when the ad closed full screen content.
        interstitialAd.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("Interstitial Ad full screen content closed.");

            // Reload the ad so that we can show another as soon as possible.
            LoadInterstitialAd();
        };
        // Raised when the ad failed to open full screen content.
        interstitialAd.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Interstitial ad failed to open full screen content " +
                           "with error : " + error);

            // Reload the ad so that we can show another as soon as possible.
            LoadInterstitialAd();
        };
    }
    #endregion

    #region Rewarded
    public void LoadRewardedAd()
    {
        // Clean up the old ad before loading a new one.
        if (_rewardedAd != null)
        {
            _rewardedAd.Destroy();
            _rewardedAd = null;
        }

        Debug.Log("Loading the rewarded ad.");

        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        RewardedAd.Load(rewardedID, adRequest,
            (RewardedAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("Rewarded ad failed to load an ad " +
                                   "with error : " + error);
                    return;
                }

                Debug.Log("Rewarded ad loaded with response : "
                          + ad.GetResponseInfo());

                _rewardedAd = ad;
                RegisterReloadHandler(_rewardedAd);
            });
    }

    public void ShowRewardedAd(Action RewardingFunction)
    {
        const string rewardMsg =
            "Rewarded ad rewarded the user. Type: {0}, amount: {1}.";

        if (_rewardedAd != null && _rewardedAd.CanShowAd())
        {
            _rewardedAd.Show((Reward reward) =>
            {
                RewardingFunction();
                // TODO: Reward the user.
                Debug.Log(String.Format(rewardMsg, reward.Type, reward.Amount));
            });
        }
    }

    private void RegisterReloadHandler(RewardedAd _rewardedAd)
    {
        // Raised when the ad closed full screen content.
        _rewardedAd.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("Rewarded Ad full screen content closed.");

            // Reload the ad so that we can show another as soon as possible.
            LoadRewardedAd();
        };
        // Raised when the ad failed to open full screen content.
        _rewardedAd.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Rewarded ad failed to open full screen content " +
                           "with error : " + error);

            // Reload the ad so that we can show another as soon as possible.
            LoadRewardedAd();
        };
    }
    #endregion

    #region Rewarded Interstitial
    public void LoadRewardedInterstitialAd()
    {
        // Clean up the old ad before loading a new one.
        if (rewardedInterstitialAd != null)
        {
            rewardedInterstitialAd.Destroy();
            rewardedInterstitialAd = null;
        }

        Debug.Log("Loading the rewarded interstitial ad.");

        // create our request used to load the ad.
        var adRequest = new AdRequest();
        adRequest.Keywords.Add("unity-admob-sample");

        // send the request to load the ad.
        RewardedInterstitialAd.Load(rewardedInterstitialID, adRequest,
            (RewardedInterstitialAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("rewarded interstitial ad failed to load an ad " +
                                   "with error : " + error);
                    return;
                }

                Debug.Log("Rewarded interstitial ad loaded with response : "
                          + ad.GetResponseInfo());

                rewardedInterstitialAd = ad;
                RegisterReloadHandler(rewardedInterstitialAd);
            });
    }

    public void ShowRewardedInterstitialAd(Action RewardingFunction)
    {
        const string rewardMsg =
            "Rewarded interstitial ad rewarded the user. Type: {0}, amount: {1}.";

        if (rewardedInterstitialAd != null && rewardedInterstitialAd.CanShowAd())
        {
            rewardedInterstitialAd.Show((Reward reward) =>
            {
                // TODO: Reward the user.
                RewardingFunction();
                LoadRewardedInterstitialAd();
            });
        }
    }

    private void RegisterReloadHandler(RewardedInterstitialAd ad)
    {
        // Raised when the ad closed full screen content.
        ad.OnAdFullScreenContentClosed += () =>{
            Debug.Log("Rewarded interstitial ad full screen content closed.");

            // Reload the ad so that we can show another as soon as possible.
            LoadRewardedInterstitialAd();
        };
        // Raised when the ad failed to open full screen content.
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Rewarded interstitial ad failed to open " +
                           "full screen content with error : " + error);

            // Reload the ad so that we can show another as soon as possible.
            LoadRewardedInterstitialAd();
        };
    }
    #endregion

    private void OnLevelWasLoaded()
    {
        LoadAndShowBannerAd();
    }
}
