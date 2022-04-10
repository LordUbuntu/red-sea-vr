using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MainMenu : MonoBehaviour
{
	public bool isStart;
	public bool isQuit;

	void OnMouseUp()
	{
		if (isStart)
		{
			// Application.LoadLevel("MainWorld");
			SceneManager.LoadScene("MainWorld");
		}
		if (isQuit)
		{
			Application.Quit();
		}
	}
}
