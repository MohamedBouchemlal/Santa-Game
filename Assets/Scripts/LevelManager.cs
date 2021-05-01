using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine;

public class LevelManager : MonoBehaviour
{

    private int nr_Gifts;
    private int current_Nr_Gifts;

    private int nr_Coins;

    private bool _continue;


    [SerializeField] UnityEvent OnGameOver;
    [SerializeField] UnityEvent OnContinue;

    void Start()
    {
        nr_Gifts = GameObject.FindGameObjectsWithTag("Gift").Length;
        current_Nr_Gifts = 0;
        nr_Coins = 0;
        _continue = true;
        UIManager.Instance.UpdateGiftUI(current_Nr_Gifts, nr_Gifts);
        UIManager.Instance.UpdateCoinUIOnStart(nr_Coins);
        PlayerStatus.OnGameOver += GameOver;
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
        //Update UI
        //Check ADs
        //
    }

    public void Continue()
    {
        //if(_continue)
            OnContinue?.Invoke();
        _continue = false;
    }
}
