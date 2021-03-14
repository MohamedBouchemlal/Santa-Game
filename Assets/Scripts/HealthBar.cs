using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{
    public Slider healthSlider;
    public Gradient gradient;
    public Image fill;

    public void SetMaxHealthBar(float health)
    {
        healthSlider.maxValue = health;
        healthSlider.value = health;
        fill.color = gradient.Evaluate(1f);
    }
    public void SetHealthBar(float health)
    {
        healthSlider.value = health;
        fill.color = gradient.Evaluate(healthSlider.normalizedValue);
    }
}
