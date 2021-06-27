using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class DestructableTile : MonoBehaviour
{
    
    [SerializeField] Sprite breakSprite;
    [SerializeField] ParticleSystem groundBreakParticle;
    [SerializeField] ParticleSystem fallApartParticle;

    [Header("Audio")]
    [SerializeField] AudioSource myAS;
    
    private SpriteRenderer sr;
    private int breakHits;
    private bool isActive;

    void Start()
    {
        sr = GetComponent<SpriteRenderer>();
        breakHits = 2;
        isActive = true;
    }

    private void Update()
    {
        if (breakHits <= 0 && isActive)
            FallApart();
    }

    public void TakeDamage()
    {
        if (breakHits == 2)
        {
            myAS.Play();
            CameraShaker.Instance.ShakeCamera(0.4f, 0.06f, 0);
            sr.sprite = breakSprite;
            Instantiate(groundBreakParticle, transform.position, groundBreakParticle.transform.rotation);
        }    
            breakHits--;
    }

    void FallApart()
    {
        myAS.Play();
        Instantiate(fallApartParticle, transform.position, fallApartParticle.transform.rotation);
        CameraShaker.Instance.ShakeCamera(0.4f, 0.12f, 0);
        GetComponent<Collider2D>().enabled = false;
        GetComponent<SpriteRenderer>().enabled = false;
        isActive = false;
        Destroy(gameObject, myAS.clip.length);
    }

    //private void OnCollisionEnter2D(Collision2D collision)
    //{
    //    if (collision.gameObject.CompareTag("Bullet"))
    //    {
    //        Vector2 hitPos = Vector2.zero;
    //        foreach(ContactPoint2D hit in collision.contacts)
    //        {
    //            hitPos.x = hit.point.x - 0.01f * hit.normal.x;
    //            hitPos.y = hit.point.y - 0.01f * hit.normal.y;

    //            DestructableMap.SetTile(DestructableMap.WorldToCell(hitPos), tileMapWithSprite);
    //        }
    //    }
    //}
}
