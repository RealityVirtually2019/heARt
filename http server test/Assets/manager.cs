using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Manager : MonoBehaviour {

	public bool sender = false;
	public MenuElement web;
	// Use this for initialization
	//int i=0;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (sender) {
			if (Input.GetKeyDown (KeyCode.Space)) {
				int width = Screen.width;
				int height = Screen.height;
				Texture2D tex = new Texture2D(width, height, TextureFormat.RGB24, false);

				tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
				tex.Apply();
				byte[] bytes = tex.EncodeToPNG();

				SendMessages.Instance.SendPacket (bytes);
				Debug.Log ("sending!");
			}
		} else {
			RecieveMessages.messageRecieved += MessageRecieved;
		}
	}

	public void MessageRecieved(byte[] message) {
		web.ButtonPressed (message);
    //
	}
}
