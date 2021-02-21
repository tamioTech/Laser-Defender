using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField] float health = 100;
    [SerializeField] float shotCounter;
    [SerializeField] float minTimeBetweenShots = 0.2f;
    [SerializeField] float maxTimeBetweenShots = 3f;
    [SerializeField] GameObject enemyLaserPrefab;
    [SerializeField] float enemyProjectileSpeed = 10f;
    [SerializeField] float enemyProjectileFiringPeriod = 0.1f;

    Coroutine enemyFiringCoroutine;

    // Start is called before the first frame update
    void Start()
    {
        shotCounter = Random.Range(minTimeBetweenShots, maxTimeBetweenShots);
    }

    // Update is called once per frame
    void Update()
    {
        CountDownAndShoot();
    }

    private void CountDownAndShoot()
    {
        shotCounter -= Time.deltaTime;
        if(shotCounter <= 0f)
        {
            Fire();
            shotCounter = Random.Range(minTimeBetweenShots, maxTimeBetweenShots); 
        }
    }

    private void Fire()
    {
        
        GameObject enemyLaser = Instantiate(
                        enemyLaserPrefab, transform.position, Quaternion.identity
                        ) as GameObject;
        enemyLaser.GetComponent<Rigidbody2D>().velocity = new Vector2(0, -enemyProjectileSpeed);
        
    }


    //IEnumerable EnemyFire()
    //{
    //    while (true)
    //    {
    //        GameObject enemyLaser = Instantiate(
    //                    enemyLaserPrefab, transform.position, Quaternion.identity
    //                    ) as GameObject;
    //        enemyLaser.GetComponent<Rigidbody2D>().velocity = new Vector2(0, enemyProjectileSpeed);
    //        yield return new WaitForSeconds(enemyProjectileFiringPeriod);
    //    }
    //}

    private void OnTriggerEnter2D(Collider2D other)
    {
        DamageDealer damageDealer = other.gameObject.GetComponent<DamageDealer>();
        ProcessHit(damageDealer);
    }

    private void ProcessHit(DamageDealer damageDealer)
    {
        health -= damageDealer.GetDamage();
        if (health <= 0)
        {
            Destroy(gameObject);
        }
    }
}
