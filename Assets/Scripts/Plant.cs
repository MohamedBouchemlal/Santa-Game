using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Plant : MonoBehaviour
{

    Transform plant;
    [SerializeField] Animator anim;
    [SerializeField] float bigRotation;
    [SerializeField] float smallRotation;
    [SerializeField] AnimationCurve curve;
    float initial_Z;

    void Awake()
    {
        plant = transform.GetChild(0);
        initial_Z = plant.eulerAngles.z;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
       GameObject interactor = collision.gameObject;

       float scaleVariable = plant.localScale.y - plant.localScale.y * 0.15f;  //0.15 scale off with 15%
       
       plant.LeanScaleY(scaleVariable, 0.25f).setLoopPingPong(1);
        if (interactor.transform.position.x < plant.position.x)
        {
            plant.LeanRotateZ(initial_Z - bigRotation, 0.25f).setLoopPingPong(1).setOnComplete(() =>
            {
                plant.LeanRotateZ(initial_Z + smallRotation, 0.1f).setLoopPingPong(1).setOnComplete(() =>
                {
                    plant.LeanScaleY(1, 0.2f);
                    plant.LeanRotateZ(initial_Z, 0.2f);
                });
            });
        }
        else
        {
            plant.LeanRotateZ(initial_Z + bigRotation, 0.25f).setLoopPingPong(1).setOnComplete(() =>
            {
                plant.LeanRotateZ(initial_Z - smallRotation, 0.1f).setLoopPingPong(1).setOnComplete(() =>
                {
                    plant.LeanScaleY(1, 0.2f);
                    plant.LeanRotateZ(initial_Z, 0.2f);
                });
            });
        }
    }
}
