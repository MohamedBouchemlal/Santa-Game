using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private static GameManager _instance;

    public static GameManager Instance { get { return _instance; } }
    public string runTimePlatform;
    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            _instance = this;
        }
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.OSXPlayer)
            runTimePlatform = "Mobile";
        else
            runTimePlatform = "PC";
    }
}
