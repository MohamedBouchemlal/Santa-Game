using System.Collections;
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
    [SerializeField] GameObject levelCompleteBossPanel;
    [SerializeField] GameObject endGamePanel;

    [Header("Unlockable Buttons")]
    [SerializeField] GameObject switchButton;
    [SerializeField] Button PowerUpButton;
    [SerializeField] GameObject energyBar;

    [Header("Attack Images")]
    [SerializeField] Button attackButton;
    [SerializeField] Sprite swordIcon;
    [SerializeField] Sprite gunIcon;

    [Header("Level Complete")]
    [SerializeField] TextMeshProUGUI nr_Coins_Complete_UI;
    [SerializeField] GameObject[] Gifts;
    [SerializeField] int[] giftsID;
    [SerializeField] ParticleSystem[] particleS;
    [SerializeField] AudioSource myAS;
    [SerializeField] bool IsBossLevel = false;
    [SerializeField] GameObject buttons;

    [Header("Pause Menu")]
    [SerializeField] GameObject pauseMenu;
    [SerializeField] GameObject settingsMenu;
    [SerializeField] Slider musicSlider;
    [SerializeField] Slider sfxSlider; //Should be Ambient
    [SerializeField] AudioSource musicAS;
    [SerializeField] AudioSource sfxAS; //Should be Ambient

    [Header("Game Over")]
    [SerializeField] TextMeshProUGUI title;
    [SerializeField] TextMeshProUGUI triesLeft;
    [SerializeField] GameObject gameOverContinueButton;
    [SerializeField] RectTransform retryButtonTransform;

    [Header("Rate Us")]
    [SerializeField] GameObject RateUsPanel;

    private Image darkCanvas;

    protected override void Awake()
    {
        base.Awake();
        darkCanvas = GameObject.Find("Dark Canvas").transform.GetChild(0).GetComponent<Image>();
        CheckLockedButtons();

        if (FindObjectOfType<Boss>())
            musicSlider.value = 1;
        else
            musicSlider.value = DataManager.Instance.gameDataSave.audio.musicVolume;
        if (sfxAS.clip.name == "Cave Wind")
            sfxSlider.value = 0.8f;
        else
            sfxSlider.value = DataManager.Instance.gameDataSave.audio.sfxVolume;

        musicAS.volume = musicSlider.value;
        sfxAS.volume = sfxSlider.value;

        AdsManagerMAS.Instance.OnRewardedVideoFinished += Continue;
    }


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

                //For AMAZON PAID

    //public void GameOver(int tries) //function did have parameter bool _continue
    //{
    //    gameOverPanel.SetActive(true);

    //    if (tries <= 0)
    //    {
    //        GameOver_Retry();
    //    }

    //    Debug.Log(tries);
    //    triesLeft.text = "Tries left: " + tries.ToString();
    //    CanvasGroup CG = gameOverPanel.GetComponent<CanvasGroup>();
    //    CG.alpha = 0;
    //    CG.LeanAlpha(1, 0.25f);
    //}

    public void GameOver()
    {
        gameOverPanel.SetActive(true);
        CanvasGroup CG = gameOverPanel.GetComponent<CanvasGroup>();
        CG.alpha = 0;
        CG.LeanAlpha(1, 0.25f);
    }


        // NOT NEEDED IN AMAZON PAID
    void GameOver_Retry()
    {
        title.text = "Game Over";
        gameOverContinueButton.SetActive(false);
        retryButtonTransform.localPosition = new Vector3(0, retryButtonTransform.localPosition.y, 0);
    }

    public void Button_Continue()
    {
        AdsManagerMAS.Instance.ShowRewardedVideo();
    }

    public void Button_Retry()
    {
        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel(myLevel);
        Time.timeScale = 1;
    }

    public void Button_Retry_AD()
    {
        AdsManagerMAS.Instance.ShowInterstitial();

        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel(myLevel);      
        Time.timeScale = 1;
    }

    public void Button_NextLevel(int level)
    {
        AdsManagerMAS.Instance.ShowInterstitial(); //AD

        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel("Level "+ level);
    }

    public void Button_Home()
    {
        AdsManagerMAS.Instance.ShowInterstitial();

        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel("Main Menu");
        Time.timeScale = 1;
    }

    public void Button_Pause()
    {
        pauseMenu.SetActive(true);
        Time.timeScale = 0;       
    }

    public void Button_Pause_Continue()
    {
        pauseMenu.SetActive(false);
        Time.timeScale = 1;
    }

    public void Button_Pause_Settings() {
        pauseMenu.SetActive(false);
        settingsMenu.SetActive(true);
    }

    public void Button_Settings_Ok()
    {
        musicAS.volume = musicSlider.value;
        sfxAS.volume = sfxSlider.value;
        pauseMenu.SetActive(true);
        settingsMenu.SetActive(false);
    }

    public void Button_Settings_Cancel()
    {
        pauseMenu.SetActive(true);
        settingsMenu.SetActive(false);
    }

    public void DisplayLevelComplete()
    {
        string myLevel = GameManager.Instance._currentLevel;
        if (!DataManager.Instance.gameDataSave.reviewed && GameManager.Instance.IsConnectedToInternet() && (myLevel == "Level 1" || myLevel == "Level 3" || 
            myLevel == "Level 5" || myLevel == "Level 9" || myLevel == "Level 11" || myLevel == "Level 13"
            || myLevel == "Level 15" || myLevel == "Level 17" || myLevel == "Level 19" || myLevel == "Level 21"))
            ShowRateUs();

        if (IsBossLevel)
        {
            if (!DataManager.Instance.gameDataSave.reviewed)
                ShowRateUs();

            levelCompleteBossPanel.SetActive(true);
            CanvasGroup CG = levelCompleteBossPanel.GetComponent<CanvasGroup>();
            CG.alpha = 0;
            CG.LeanAlpha(1, 0.4f);          
        }
        else
        {
            levelCompletePanel.SetActive(true);
            CanvasGroup CG = levelCompletePanel.GetComponent<CanvasGroup>();
            CG.alpha = 0;
            CG.LeanAlpha(1, 0.4f);
            nr_Coins_Complete_UI.text = nr_Coins_UI.text;                    

            for (int i = 0; i < giftsID.Length; i++)
            {
                if (DataManager.Instance.gameDataSave.giftsData.GiftsIDs.Contains(giftsID[i]))
                    Gifts[i].SetActive(true);
                else
                    Gifts[i].SetActive(false);
            }
        }
        myAS.Play();
        foreach (ParticleSystem ps in particleS)
            ps.Play();

        buttons.SetActive(false);
    }

    public void DarkenDarkCanvas()
    {
        StartCoroutine(LerpColor(5f, 0.6f));
    }

    public void LightenDarkCanvas()
    {
        StartCoroutine(LerpColor(5f, 0.17f));
    }

    public void CheckLockedButtons()
    {
        if (DataManager.Instance.gameDataSave.playerData.rangeWeapon)
        {
            switchButton.SetActive(true);
            energyBar.SetActive(true);
        }
        else
        {
            switchButton.SetActive(false);
            energyBar.SetActive(false);
        }

        if (DataManager.Instance.gameDataSave.playerData.powerUp)
            PowerUpButton.gameObject.SetActive(true);
        else
            PowerUpButton.gameObject.SetActive(false);
    }

    public void SwitchAttackUI(WeaponState wpState)
    {
        if (wpState == WeaponState.MELEE)
            attackButton.image.sprite = swordIcon;
        else if (wpState == WeaponState.RANGE)
            attackButton.image.sprite = gunIcon;
    }

    public void SwitchPowerUpUI(bool poweredUp)
    {
        if (poweredUp)
            PowerUpButton.image.color = new Color32(217,60,60,255);
        else
            PowerUpButton.image.color = new Color32(255, 255, 255, 180);
    }

    IEnumerator LerpColor(float waitTime, float alpha)
    {
        float elapsedTime = 0;
        Color darkC = new Color(0,0,0,alpha);
        while(elapsedTime < waitTime)
        {
            darkCanvas.color = Color.Lerp(darkCanvas.color, darkC, elapsedTime / waitTime);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
    }

    public void DisplayEndOfGame()
    {
        endGamePanel.SetActive(true);
        CanvasGroup CG = endGamePanel.GetComponent<CanvasGroup>();
        CG.alpha = 0;
        CG.LeanAlpha(1, 1f);
    }

    public void Continue()
    {
        gameOverPanel.SetActive(false);
    }

    protected override void OnDestroy()
    {
        AdsManagerMAS.Instance.OnRewardedVideoFinished -= Continue;
    }

    public void ShowRateUs()
    {
        if (GameManager.Instance.IsConnectedToInternet())
        {
            RateUsPanel.SetActive(true);
            CanvasGroup CG = RateUsPanel.GetComponent<CanvasGroup>();
            CG.alpha = 0;
            CG.LeanAlpha(1, 1f);
        }
    }

    public void RateUs_Yes()
    {
        if (GameManager.Instance.IsConnectedToInternet())
            Application.OpenURL("https://play.google.com/store/apps/details?id=com.B2MG.SantasChristmasAdventures");
        else
            Debug.Log("No internet");

        DataManager.Instance.gameDataSave.reviewed = true;
        DataManager.Instance.Save();
        RateUsPanel.SetActive(false);
    }

    public void RateUs_NotNow()
    {
        RateUsPanel.SetActive(false);
    }
}
