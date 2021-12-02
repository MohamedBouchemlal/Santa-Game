using UnityEngine;
using System;
using System.Collections.Generic;

namespace Yodo1.MAS
{
    public class Yodo1U3dBannerAdView
    {
        private static List<Yodo1U3dBannerAdView> BannerAdViews = new List<Yodo1U3dBannerAdView>();

        private Yodo1U3dBannerAdSize adSize;
        private Yodo1U3dBannerAdPosition adPosition;
        private string adPlacement = "";
        private int adPositionX = 0;
        private int adPositionY = 0;
        private bool available;

        private Action<Yodo1U3dBannerAdView> _onBannerAdLoadedEvent;
        private Action<Yodo1U3dBannerAdView, Yodo1U3dAdError> _onBannerAdFailedToLoadEvent;
        private Action<Yodo1U3dBannerAdView> _onBannerAdOpenedEvent;
        private Action<Yodo1U3dBannerAdView, Yodo1U3dAdError> _onBannerAdFailedToOpenEvent;
        private Action<Yodo1U3dBannerAdView> _onBannerAdClosedEvent;

        public event Action<Yodo1U3dBannerAdView> OnAdLoadedEvent
        {
            add
            {
                _onBannerAdLoadedEvent += value;
            }
            remove
            {
                _onBannerAdLoadedEvent -= value;
            }
        }

        public event Action<Yodo1U3dBannerAdView, Yodo1U3dAdError> OnAdFailedToLoadEvent
        {
            add
            {
                _onBannerAdFailedToLoadEvent += value;
            }
            remove
            {
                _onBannerAdFailedToLoadEvent -= value;
            }
        }

        public event Action<Yodo1U3dBannerAdView> OnAdOpenedEvent
        {
            add
            {
                _onBannerAdOpenedEvent += value;
            }
            remove
            {
                _onBannerAdOpenedEvent -= value;
            }
        }

        public event Action<Yodo1U3dBannerAdView, Yodo1U3dAdError> OnAdFailedToOpenEvent
        {
            add
            {
                _onBannerAdFailedToOpenEvent += value;
            }
            remove
            {
                _onBannerAdFailedToOpenEvent -= value;
            }
        }

        public event Action<Yodo1U3dBannerAdView> OnAdClosedEvent
        {
            add
            {
                _onBannerAdClosedEvent += value;
            }
            remove
            {
                _onBannerAdClosedEvent -= value;
            }
        }


        public static void CallbcksEvent(Yodo1U3dAdEvent adEvent, Yodo1U3dAdError adError)
        {
            foreach (Yodo1U3dBannerAdView bannerAdView in Yodo1U3dBannerAdView.BannerAdViews)
            {
                if (bannerAdView != null)
                {
                    bannerAdView.Callbacks(adEvent, adError);
                }
            }
        }

        private void Callbacks(Yodo1U3dAdEvent adEvent, Yodo1U3dAdError adError)
        {
            if (!this.available)
            {
                return;
            }
            switch (adEvent)
            {
                case Yodo1U3dAdEvent.AdError:
                    break;
                case (Yodo1U3dAdEvent)1003:
                    Yodo1U3dMasCallback.InvokeEvent(_onBannerAdLoadedEvent, this);
                    break;
                case (Yodo1U3dAdEvent)1004:
                    Yodo1U3dMasCallback.InvokeEvent(_onBannerAdFailedToLoadEvent, this, adError);
                    break;
                case Yodo1U3dAdEvent.AdOpened:
                    Yodo1U3dMasCallback.InvokeEvent(_onBannerAdOpenedEvent, this);
                    break;
                case (Yodo1U3dAdEvent)1005:
                    Yodo1U3dMasCallback.InvokeEvent(_onBannerAdFailedToOpenEvent, this, adError);
                    break;
                case Yodo1U3dAdEvent.AdClosed:
                    //Yodo1U3dMasCallback.InvokeEvent(_onBannerAdClosedEvent, this);
                    //BannerAdViews.Remove(this);
                    break;
            }
        }

        /// <summary>
        /// The default `Yodo1U3dBannerAdView` constructor, the default values as following:
        /// AdSize is `Yodo1U3dBannerAdSize.Banner`,
        /// AdPosition is `Yodo1U3dBannerAdPosition.BannerBottom | Yodo1U3dBannerAdPosition.BannerHorizontalCenter`
        /// </summary>
        public Yodo1U3dBannerAdView()
        {
            this.available = IsCanAddBannerView() ? true : false;
            if (!this.available)
            {
                Debug.LogError("[Yodo1 Mas] You have initialized the banner instance. Initialization of multiple instances is not supported for the time being");
                return;
            }
            this.adSize = Yodo1U3dBannerAdSize.Banner;
            this.adPosition = Yodo1U3dBannerAdPosition.BannerBottom | Yodo1U3dBannerAdPosition.BannerHorizontalCenter;
        }

        /// <summary>
        /// `Yodo1U3dBannerAdView` constructor with `Yodo1U3dBannerAdSize` and `Yodo1U3dBannerAdPosition`
        /// </summary>
        /// <param name="adSize">Bannr ad size</param>
        /// <param name="adPosition">Banner ad position</param>
        public Yodo1U3dBannerAdView(Yodo1U3dBannerAdSize adSize, Yodo1U3dBannerAdPosition adPosition)
        {
            this.available = IsCanAddBannerView() ? true : false;
            if (!this.available)
            {
                Debug.LogError("[Yodo1 Mas] You have initialized the banner instance. Initialization of multiple instances is not supported for the time being");
                return;
            }
            this.adSize = adSize;
            this.adPosition = adPosition;
        }

        /// <summary>
        /// Custom ad position.
        /// For greater control over where a `Yodo1U3dBannerAdView` is placed on screen than what's offered by `Yodo1U3dBannerAdPosition` values,
        /// use the `Yodo1U3dBannerAdView` constructor that has x- and y-coordinates as parameters.
        ///
        /// The top-left corner of the `Yodo1U3dBannerAdView` will be positioned at the x and y values passed to the constructor, where the origin is the top-left of the screen.
        /// </summary>
        /// <param name="adSize">Banner ad size</param>
        /// <param name="x">X-coordinates in pixels</param>
        /// <param name="y">Y-coordinates in pixels</param>
        public Yodo1U3dBannerAdView(Yodo1U3dBannerAdSize adSize, int x, int y)
        {
            this.available = IsCanAddBannerView() ? true : false;
            if (!this.available)
            {
                Debug.LogError("[Yodo1 Mas] You have initialized the banner instance. Initialization of multiple instances is not supported for the time being");
                return;
            }
            this.adSize = adSize;
            this.adPositionX = x;
            this.adPositionY = y;
        }

        private void BannerV2(string methodName)
        {
            if (Application.platform == RuntimePlatform.IPhonePlayer)
            {
#if UNITY_IPHONE
                Yodo1U3dAdsIOS.BannerV2(methodName, this.ToJsonString());
#endif
            }
            else if (Application.platform == RuntimePlatform.Android)
            {
#if UNITY_ANDROID
                Yodo1U3dAdsAndroid.BannerV2(methodName, this.ToJsonString());
#endif
            }
        }

        /// <summary>
        /// Load banner ads, the banner ad will be displayed automatically after loaded
        /// </summary>
        public void LoadAd()
        {
            if (!this.available)
            {
                return;
            }
            BannerV2("loadBannerAdV2");
        }

        /// <summary>
        /// Hide banner ads
        /// </summary>
        public void Hide()
        {
            if (!this.available)
            {
                return;
            }
            BannerV2("hideBannerAdV2");
        }

        /// <summary>
        /// Show banner ads
        /// </summary>
        public void Show()
        {
            if (!this.available)
            {
                return;
            }
            BannerV2("showBannerAdV2");
        }

        /// <summary>
        /// Destroy banner ads
        /// </summary>
        public void Destroy()
        {
            if (!this.available)
            {
                return;
            }
            BannerV2("destroyBannerAdV2");
            Yodo1U3dMasCallback.InvokeEvent(_onBannerAdClosedEvent, this);
            BannerAdViews.Remove(this);
        }

        public float GetHeightInPixels()
        {
            if (Application.platform == RuntimePlatform.IPhonePlayer)
            {
#if UNITY_IPHONE
                return Yodo1U3dAdsIOS.GetBannerHeightInPixels((int)this.adSize.AdType);
#endif
            }
            else if (Application.platform == RuntimePlatform.Android)
            {
#if UNITY_ANDROID
                return Yodo1U3dAdsAndroid.GetBannerHeightInPixels((int)this.adSize.AdType);
#endif
            }
            return 1.0f;
        }

        public float GetWidthInPixels()
        {
            if (Application.platform == RuntimePlatform.IPhonePlayer)
            {
#if UNITY_IPHONE
                return Yodo1U3dAdsIOS.GetBannerWidthInPixels((int)this.adSize.AdType);
#endif
            }
            else if (Application.platform == RuntimePlatform.Android)
            {
#if UNITY_ANDROID
                return Yodo1U3dAdsAndroid.GetBannerWidthInPixels((int)this.adSize.AdType);
#endif
            }
            return 1.0f;
        }

        public void SetAdPlacement(string adPlacement)
        {
            if (!this.available)
            {
                return;
            }
            this.adPlacement = adPlacement;
        }

        public string ToJsonString()
        {
            Dictionary<string, object> dic = new Dictionary<string, object>();
            dic.Add("adSize", (int)this.adSize.AdType);
            dic.Add("adPosition", (int)this.adPosition);
            dic.Add("customAdPositionX", this.adPositionX);
            dic.Add("customAdPositionY", this.adPositionY);
            dic.Add("adPlacement", this.adPlacement);
            return Yodo1JSON.Serialize(dic);
        }

        private bool IsCanAddBannerView()
        {
            if (BannerAdViews.Count == 0)
            {
                BannerAdViews.Add(this);
                return true;
            }
            return false;
        }
    }
}