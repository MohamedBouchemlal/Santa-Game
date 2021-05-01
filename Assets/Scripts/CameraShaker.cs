using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraShaker : MonoBehaviour
{
    private Camera cam;
    private Transform camTransform;
    private CameraFollow camFollow;

    private float shakeTimeRemaining, shakePower, shakeFadeTime;
    private float shakeRotation, rotationMultiplier;
    private bool otherShake;

    public static CameraShaker Instance;

    void Awake()
    {      
        cam = Camera.main;
        camFollow = GetComponent<CameraFollow>();
        camTransform = transform;
        Instance = this;
    }

    private void LateUpdate()
    {
        if(shakeTimeRemaining > 0)
        {
            shakeTimeRemaining -= Time.deltaTime;

            float x = Random.Range(-1f,1f) * shakePower;
            float y = Random.Range(-1f,1f) * shakePower;

            camTransform.localPosition = new Vector3(x, y, 0);
            
            shakePower = Mathf.MoveTowards(shakePower, 0, shakeFadeTime * Time.deltaTime);
            shakeRotation = Mathf.MoveTowards(shakeRotation, 0, shakeFadeTime * rotationMultiplier * Time.deltaTime);
        }
        else if(!otherShake)
            camTransform.localPosition = Vector2.zero;

        if (!otherShake)
            camTransform.localRotation = Quaternion.Euler(0f, 0f, shakeRotation * Random.Range(-1f,1f));
    }

    public void ShakeCamera(float length, float power, float rotation)
    {
        rotationMultiplier = rotation;
        shakeTimeRemaining = length;
        shakePower = power;
        shakeFadeTime = power / length;
        shakeRotation = power * rotationMultiplier;
    }

    public void BackwardShake(float xAmount, float RotAmount)
    {
        otherShake = true;
        camTransform.LeanMoveLocalX(xAmount, .05f).setOnComplete(() =>
        {
            camTransform.LeanMoveLocalX(0, .1f).setOnComplete(()=> {
                otherShake = false;
            });
        });
        camTransform.LeanRotateZ(-RotAmount, .04f).setOnComplete(()=>{
            camTransform.LeanRotateZ(RotAmount * 0.5f, .06f);
        });
    }

    public void ZoomIn(float duration, Transform target, float cameraSize)
    {
        StartCoroutine(ZoomIn_Cor(duration, target, cameraSize));        
    }

    IEnumerator ZoomIn_Cor(float duration, Transform target, float cameraSize)
    {
        camFollow.SetTarget(target);

        while (cam.orthographicSize > cameraSize)
        {
            cam.orthographicSize -= (1/duration) * Time.unscaledDeltaTime;
            yield return null;
        }
        cam.orthographicSize = cameraSize;
    }

    public void ZoomOut(float duration)
    {
        StartCoroutine(ZoomOut_Cor(duration));
    }

    IEnumerator ZoomOut_Cor(float duration)
    {
        
        while (cam.orthographicSize <= 5)
        {
            cam.orthographicSize += (1 / duration) * Time.unscaledDeltaTime;
            yield return null;
        }
        cam.orthographicSize = 5f;
    }
}
