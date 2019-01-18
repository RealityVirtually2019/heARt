using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using System.IO;

public class captureImage : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
		Invoke ("capture", 3);
	}

	void capture(){
		MLCamera.CaptureImage (Application.persistentDataPath + "/" + "screenshot");
		Texture2D texture = Resources.Load (Application.persistentDataPath + "/" + "screenshot") as Texture2D;
		GetComponent<Renderer> ().material.mainTexture = texture;
	}

	// Update is called once per frame
	void Update () {
		
	}
}
