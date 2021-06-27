using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropItemSpawner : MonoBehaviour
{
    [SerializeField] List<GameObject> items;
    [SerializeField] int[] percentages;
    private int totalPercentage = 0;
    private GameObject selectedItem;
    private int randomNumber;

    [Header("Coin")]
    [SerializeField] int minCoinNumber;
    [SerializeField] int maxCoinNumber;

    [SerializeField] Vector2 spawnRangeOffset;
    private int coinNumber;

    void Start()
    {
        foreach (var percentage in percentages)
            totalPercentage += percentage;        
    }

    public void DropRandomItem()
    {
        randomNumber = Random.Range(0, totalPercentage);

        for (int i = 0; i < percentages.Length; i++)
        {
            if (randomNumber <= percentages[i])
            {
                if (items[i])
                {
                    selectedItem = items[i];
                    break;
                }
                else return;
            }
            else
                randomNumber -= percentages[i];
        }          

        if (selectedItem.CompareTag("Coin"))
            DropCoin();
        else 
            DropItem();
    }

    void DropCoin()
    {
        coinNumber = Random.Range(minCoinNumber, maxCoinNumber);
        for (int i = 0; i < coinNumber; i++)
        {
            float rX = Random.Range(-spawnRangeOffset.x, spawnRangeOffset.x);

            Vector2 spawnPosition = (Vector2)transform.position + new Vector2(rX, 0);
            GameObject coin = ObjectPool.Instance.Get("Coin");
            if (coin)
            {
                coin.transform.position = spawnPosition;
                coin.SetActive(true);
                coin.GetComponent<Rigidbody2D>().AddForce(new Vector2(0, spawnRangeOffset.y), ForceMode2D.Impulse);
            }
        }
    }

    void DropItem()
    {
        Instantiate(selectedItem, transform.position, transform.rotation);
    }
}
