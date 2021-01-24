using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    //config params
    [SerializeField] float moveSpeed1 = 15f;
    [SerializeField] float padding1 = .5f;
    [SerializeField] GameObject laserPrefab;
    [SerializeField] float projectileSpeed = 50f;
    [SerializeField] float projectileFiringPeriod = 0.1f;


    float xMin;
    float xMax;
    float yMin;
    float yMax;

    // Start is called before the first frame update
    void Start()
    {
        SetUpMoveBoundaries();
        StartCoroutine(PrintAndWait());
        StartCoroutine(PrintingAndWaiting());

    }

   
    // Update is called once per frame
    void Update()
    {
        Move();
        Fire();
    }

    IEnumerator PrintingAndWaiting()
    {
        Debug.Log("Starting up primary engines. Wait 5 seconds");
        yield return new WaitForSeconds(5);
        Debug.Log("5 seconds is up.  Starting primary engines!");
    }


    IEnumerator PrintAndWait()
    {
        Debug.Log("First message received Bozu!");
        yield return new WaitForSeconds(3);
        Debug.Log("Second message flew in Sensei!");
    }

    private void Fire()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            FireContinuously();
        }
    }

    IEnumerator FireContinuously()
    {
        GameObject laser = Instantiate(
                laserPrefab, transform.position, Quaternion.identity
                ) as GameObject;
        laser.GetComponent<Rigidbody2D>().velocity = new Vector2(0, projectileSpeed);
        yield return new WaitForSeconds(projectileFiringPeriod);
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