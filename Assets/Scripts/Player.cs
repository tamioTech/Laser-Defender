using System.Collections;
using System.Collections.Generic;
using UnityEngine;
























































public class Player : MonoBehaviour
{
    //config params
    [Header("Player")] 
    [SerializeField] float moveSpeed1 = 15f;
    [SerializeField] float padding1 = .5f;
    [SerializeField] int playerHealth = 200;
    [Header("Projectile")]
    [SerializeField] GameObject laserPrefab;
    [SerializeField] float projectileSpeed = 50f;
    [SerializeField] float projectileFiringPeriod = 0.1f;
    [SerializeField] AudioClip deathSFX;
    [SerializeField] [Range(0, 1)] float deathSFXVolume = 1f;
    [SerializeField] AudioClip playerShootSFX;
    [SerializeField] [Range(0, 1)] float playerShootSFXVolume = 0.5f;

    Coroutine firingCoroutine;

    float xMin;
    float xMax;
    float yMin;
    float yMax;

    // Start is called before the first frame update
    void Start()
    {
        SetUpMoveBoundaries();

    }

   
    // Update is called once per frame
    void Update()
    {
        Move();
        Fire();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        DamageDealer damageDealer = other.gameObject.GetComponent<DamageDealer>();
        if (!damageDealer) { return; }
        ProcessHit(damageDealer);
    }

    private void ProcessHit(DamageDealer damageDealer)
    {
        playerHealth -= damageDealer.GetDamage();
        damageDealer.Hit();
        if (playerHealth <= 0)
        {
            Destroy(gameObject);
            AudioSource.PlayClipAtPoint(deathSFX, Camera.main.transform.position, deathSFXVolume);
        }
    }

    private void Fire()
    {
        if (Input.GetButtonDown("Fire1"))
        {
           firingCoroutine = StartCoroutine(FireContinuously());
           
        }
        if (Input.GetButtonUp("Fire1"))
        {
            StopCoroutine(firingCoroutine);
        }
    }

    IEnumerator FireContinuously()
    {
        while (true)
        {
            AudioSource.PlayClipAtPoint(playerShootSFX, Camera.main.transform.position, playerShootSFXVolume);
            GameObject laser = Instantiate(
                    laserPrefab, transform.position, Quaternion.identity
                    ) as GameObject;
            laser.GetComponent<Rigidbody2D>().velocity = new Vector2(0, projectileSpeed);
            yield return new WaitForSeconds(projectileFiringPeriod);
        }
    }


    private void Move()
    {
        var deltaX = Input.GetAxis("Horizontal") * Time.deltaTime * moveSpeed1;
        var deltaY = Input.GetAxis("Vertical") * Time.deltaTime * moveSpeed1;
        var newXPos = Mathf.Clamp(transform.position.x + deltaX, xMin, xMax);
        var newYPos = Mathf.Clamp(transform.position.y + deltaY, yMin, yMax);
        transform.position = new Vector2(newXPos, newYPos);
    }

    private void SetUpMoveBoundaries()
    {
        Camera gameCamera = Camera.main;
        xMin = gameCamera.ViewportToWorldPoint(new Vector3(0, 0, 0)).x + padding1;
        xMax = gameCamera.ViewportToWorldPoint(new Vector3(1, 0, 0)).x - padding1;
        yMin = gameCamera.ViewportToWorldPoint(new Vector3(0, 0, 0)).y + padding1;
        yMax = gameCamera.ViewportToWorldPoint(new Vector3(0, 1, 0)).y - padding1;
    }

}