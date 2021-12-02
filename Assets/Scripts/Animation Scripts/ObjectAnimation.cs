using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectAnimation : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] float height;
    [SerializeField] float time;
    [SerializeField] float angle;

    [SerializeField] bool delayCollision = false;
    Collider2D myC;

    private void OnEnable()
    {
        myC = GetComponent<Collider2D>();

        if (!gameObject.GetComponent<Rigidbody2D>())
        {
            float Y = transform.position.y;
            LeanTween.moveY(gameObject, Y + height, time).setLoopPingPong();
        }
        LeanTween.rotateY(gameObject, angle, time).setLoopPingPong();

        if (delayCollision)
        {
            myC.enabled = false;
            Invoke("ActivateCollider", 0.75f);
        }
    }

    void ActivateCollider()
    {
        myC.enabled = true;
    }
}
