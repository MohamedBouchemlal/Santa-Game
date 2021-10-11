using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class HornTrigger : MonoBehaviour
{
    [SerializeField] UnityEvent OnTriggerHit;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
            OnTriggerHit?.Invoke();
    }
}
