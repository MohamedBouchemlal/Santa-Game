using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCollision : MonoBehaviour
{
    //Scripts
    LevelManager levelManager;
    ObjectPool pool;
    PlayerStatus playerStatus;

    private void Start()
    {
        levelManager = FindObjectOfType<LevelManager>();
        pool = ObjectPool.Instance;
        playerStatus = gameObject.GetComponent<PlayerStatus>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        GameObject my_GameObject = collision.gameObject;
        string colliderTag = my_GameObject.tag.ToString();
        switch (colliderTag)
        {          
            case "Green_Candy":
                {
                    if (playerStatus.CollectGreenCandy(15))
                    {
                        Destroy(my_GameObject);
                    }
                    break;
                }
            case "Big_Green_Candy":
                {
                    if (playerStatus.CollectGreenCandy(35))
                    {
                        Destroy(my_GameObject);
                    }
                    break;
                }
            case "Red_Candy":
                {
                    if (playerStatus.CollectRedCandy(2))
                    {
                        Destroy(my_GameObject);
                    }
                    break;
                }
            case "Big_Red_Candy":
                {
                    if (playerStatus.CollectRedCandy(45))
                    {
                        Destroy(my_GameObject);
                    }
                    break;
                }
            case "Gift":
                {
                    levelManager.CollectGift();
                    my_GameObject.GetComponent<Gift>().MoveToUI();
                }
                break;
            case "Coin":
                {
                    levelManager.CollectCoin();
                    GameObject coinPS = pool.Get("Coin Particles");
                    coinPS.transform.position = collision.transform.position;
                    coinPS.SetActive(true);
                    pool.returnToPool("Coin", collision.transform.parent.gameObject);
                    //Destroy(collision.gameObject);
                    break;
                }

        }
    }
}
