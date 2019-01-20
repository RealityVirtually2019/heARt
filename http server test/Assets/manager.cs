using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Manager : MonoBehaviour {
	public bool sender = false;
	public MenuElement web;
	public Text txt;
	int index = 0;

	public TextAsset textFile;

	// Use this for initialization
	//int i=0;
	void Start () {
		if (sender) {
			InvokeRepeating ("test", 5, 5);
		}
	}

	void test(){
		/*
		int width = Screen.width;
		int height = Screen.height;
		Texture2D tex = new Texture2D (width, height, TextureFormat.RGB24, false);

		tex.ReadPixels (new Rect (0, 0, width, height), 0, 0);
		tex.Apply ();
		byte[] bytes = tex.EncodeToPNG ();
		*/

		//textFile = Resources.Load("C:\\Users\\tpura\\Desktop\\test.txt") as TextAsset;
		string text = textFile.text;  //this is the content as string
		Debug.Log(text.Length);
		if (text.Length > 0) {
			byte[] byteText = textFile.bytes;  //this is the content as byte array

			Debug.Log (text);

			SendMessages.Instance.SendPacket (byteText);
			txt.text = (index++).ToString ();
		}
	}

	// Update is called once per frame
	void Update () {
		if (sender) {
			test ();
		} else {
			RecieveMessages.messageRecieved += MessageRecieved;

		}
	}

	public void MessageRecieved(byte[] message) {
		web.ButtonPressed (message);
    //
	}
}
