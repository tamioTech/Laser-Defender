using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    public void LoadStartMenu()
    {
        SceneManager.LoadScene(0);
    }

    public void LoadGame()
    {

        SceneManager.LoadScene(1);
    }

    public void LoadGameOver()
    {

        SceneManager.LoadScene(2);
        //StartCoroutine(WaitAndLoad());
        
        //SceneManager.LoadScene(2);
        
    }

    IEnumerator WaitAndLoad()
    {
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(2);
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}

