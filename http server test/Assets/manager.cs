using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Manager : MonoBehaviour {
	public bool sender = false;
	public MenuElement web;
	public Text txt;
	int index = 0;
	// Use this for initialization
	//int i=0;
	void Start () {
		InvokeRepeating ("test", 5, 5);
	}

	void test(){
		int width = Screen.width;
		int height = Screen.height;
		Texture2D tex = new Texture2D (width, height, TextureFormat.RGB24, false);

		tex.ReadPixels (new Rect (0, 0, width, height), 0, 0);
		tex.Apply ();
		byte[] bytes = tex.EncodeToPNG ();

		SendMessages.Instance.SendPacket (bytes);
		txt.text = (index++).ToString ();
	}

	// Update is called once per frame
	void Update () {
		if (sender) {
			if (Input.GetTouch (0).phase == TouchPhase.Began) {
				
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
