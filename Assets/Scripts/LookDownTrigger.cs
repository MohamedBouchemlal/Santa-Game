using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookDownTrigger : MonoBehaviour
{
    CameraFollow camFollow;

    [SerializeField] float yOffset;
    private float initialY;

    void Start()
    {
        camFollow = FindObjectOfType<CameraFollow>();
        initialY = camFollow.GetYOffset();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
            camFollow.SetYOffset(yOffset);
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
            camFollow.SetYOffset(initialY);
    }
}
