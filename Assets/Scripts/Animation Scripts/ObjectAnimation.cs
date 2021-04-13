using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectAnimation : MonoBehaviour
{
    // Start is called before the first frame update
    public float height;
    public float time;
    public float angle;

    private void OnEnable()
    {
        if (!gameObject.GetComponent<Rigidbody2D>())
        {
            float Y = transform.position.y;
            LeanTween.moveY(gameObject, Y + height, time).setLoopPingPong();
        }
        LeanTween.rotateY(gameObject, angle, time).setLoopPingPong();
    }
}
