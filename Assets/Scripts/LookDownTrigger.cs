using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookDownTrigger : MonoBehaviour
{
    CameraFollow camFollow;

    [SerializeField] float yOffset;
    [SerializeField] Transform camTarget;
    private float initialY;
    private float initialX;

    void Start()
    {
        camFollow = FindObjectOfType<CameraFollow>();
        initialY = camFollow.GetYOffset();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            camFollow.SetOffset(yOffset);
            if (camTarget)
                camFollow.SetTarget(camTarget);
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            camFollow.SetOffset(initialY);
            if (camTarget)
                camFollow.SetInitializeTarget();
        }
    }
}
