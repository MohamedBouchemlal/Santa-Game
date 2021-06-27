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
    float initial_RotZ;
    float initial_ScaleY;

    void Awake()
    {
        plant = transform.GetChild(0);
        initial_RotZ = plant.eulerAngles.z;
        initial_ScaleY = plant.localScale.y;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
       GameObject interactor = collision.gameObject;

       float scaleVariable = plant.localScale.y - plant.localScale.y * 0.15f;  //0.15 scale off with 15%
       
       plant.LeanScaleY(scaleVariable, 0.25f).setLoopPingPong(1);
        if (interactor.transform.position.x < plant.position.x)
        {
            plant.LeanRotateZ(initial_RotZ - bigRotation, 0.25f).setLoopPingPong(1).setOnComplete(() =>
            {
                plant.LeanRotateZ(initial_RotZ + smallRotation, 0.1f).setLoopPingPong(1).setOnComplete(() =>
                {
                    plant.LeanScaleY(initial_ScaleY, 0.2f);
                    plant.LeanRotateZ(initial_RotZ, 0.2f);
                });
            });
        }
        else
        {
            plant.LeanRotateZ(initial_RotZ + bigRotation, 0.25f).setLoopPingPong(1).setOnComplete(() =>
            {
                plant.LeanRotateZ(initial_RotZ - smallRotation, 0.1f).setLoopPingPong(1).setOnComplete(() =>
                {
                    plant.LeanScaleY(1, 0.2f);
                    plant.LeanRotateZ(initial_RotZ, 0.2f);
                });
            });
        }
    }
}
