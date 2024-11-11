using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    private int nr_Gifts;
    private int current_Nr_Gifts;
    private int nr_Coins;
    //private bool _continue;
    private int tries;   

    [SerializeField] UnityEvent OnGameOver;
    [SerializeField] public UnityEvent OnContinue;
    [SerializeField] UnityEvent OnLevelComplete;

    void Start()
    {
        nr_Gifts = FindObjectsOfType<Gift>().Length;
        current_Nr_Gifts = 0;
        nr_Coins = 0;
        //tries = 3; FOR PAID
       
        UIManager.Instance.UpdateGiftUI(current_Nr_Gifts, nr_Gifts);
        UIManager.Instance.UpdateCoinUIOnStart(nr_Coins);
        PlayerStatus.OnGameOver += GameOver;

        //AdsGleyManager.Instance.OnRewardedVideoFinished += Continue;
    }

    public void CollectGift()
    {
        if(current_Nr_Gifts < nr_Gifts)
        {
            current_Nr_Gifts++;
            UIManager.Instance.UpdateGiftUI(current_Nr_Gifts, nr_Gifts);
        }
        else
            Debug.Log("More Gifts than usual");
    }

    public void CollectCoin()
    {
        nr_Coins++;
        UIManager.Instance.UpdateCoinUI(nr_Coins);
    }

    public void GameOver()
    {
        OnGameOver?.Invoke();
        //For Amazon
        //tries--; FOR PAID
        //UIManager.Instance.GameOver(tries);
        UIManager.Instance.GameOver();
        //Check ADs
        //
    }

    public void LevelComplete()
    {
        OnLevelComplete?.Invoke();
        UIManager.Instance.DisplayLevelComplete();
        string levelStr = GameManager.Instance._currentLevel.Remove(0,6);
        
        int levelIndex = int.Parse(levelStr) + 1;
        DataManager.Instance.gameDataSave.levelsData[levelIndex].Locked = false;
        DataManager.Instance.gameDataSave.coinsData.collectedCoins += nr_Coins;
        DataManager.Instance.gameDataSave.giftsData.collectedGifts += current_Nr_Gifts;
        DataManager.Instance.Save();
    }

    public void Continue()
    {
        
        OnContinue?.Invoke();        
        //Display gameover with no continue       
        //_continue = false;
    }

    private void OnDestroy()
    {
        PlayerStatus.OnGameOver -= GameOver;
        //AdsGleyManager.Instance.OnRewardedVideoFinished -= Continue;
    }

    public void LoadEndLevel()
    {
        GameManager.Instance.UnLoadLevel("Level 21");
        GameManager.Instance.LoadLevel("End");
    }
}
