using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class DestructableTile : MonoBehaviour
{
    
    [SerializeField] Sprite breakSprite;
    [SerializeField] ParticleSystem groundBreakParticle;
    [SerializeField] ParticleSystem fallApartParticle;

    private SpriteRenderer sr;
    private int breakHits;

    void Start()
    {
        sr = GetComponent<SpriteRenderer>();
        breakHits = 2;
    }

    private void Update()
    {
        if (breakHits <= 0)
            FallApart();
    }

    public void TakeDamage()
    {
        if (breakHits == 2)
        {
            CameraShaker.Instance.ShakeCamera(0.4f, 0.06f, 0);
            sr.sprite = breakSprite;
            Instantiate(groundBreakParticle, transform.position, groundBreakParticle.transform.rotation);
        }    
            breakHits--;
    }

    void FallApart()
    {
        Instantiate(fallApartParticle, transform.position, fallApartParticle.transform.rotation);
        CameraShaker.Instance.ShakeCamera(0.4f, 0.12f, 0);
        Destroy(gameObject);
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
