﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeManager : Singleton<TimeManager>
{

    public void DoSlowEffect(float duration)
    {
        StartCoroutine(SlowEffectCoroutine(duration));
    }

    IEnumerator SlowEffectCoroutine(float duration)
    {
        yield return new WaitForSeconds(0.15f);
        Time.timeScale = 0.05f;
        yield return new WaitForSeconds(0.02f * 0.05f); //pause duration 0.2 in the scale of 0.05;
        while (Time.timeScale <= 1)
        {
            Time.timeScale += (1f / duration) * Time.unscaledDeltaTime * 1f;
            Time.fixedDeltaTime = Time.timeScale * .02f;
            yield return null;
        }
        Time.timeScale = 1;
    }
}
