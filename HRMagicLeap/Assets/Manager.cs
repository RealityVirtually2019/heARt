using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class Manager : MonoBehaviour {
	public bool sender = false;
	public MenuElement web;
	public Text txt;
	//int index = 0;
	string path = "D:\\Unity\\Projects\\HRMagicLeap\\Assets\\test.txt";

	public TextAsset textFile;
	FileStream fileStream;
	StreamReader sr;
	// Use this for initialization
	//int i=0;
	void Start () {
		if (sender) {
			InvokeRepeating ("test", 0, 3);
		}

		//fileStream = new System.IO.FileStream ("C:\\Users\\tpura\\Desktop\\Unity Projects\\heARt\\heARt\\http server test\\Assets\\Scenes\\test.txt", FileMode.Open, FileAccess.Read, FileShare.Delete | FileShare.ReadWrite);
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
		sr = new StreamReader(path);
   		string text = sr.ReadToEnd ();
		sr.Close ();
		//textFile = Resources.Load("C:\\Users\\tpura\\Desktop\\test.txt") as TextAsset;
		if (text.Length > 0) {
			byte[] byteText = System.Text.Encoding.UTF8.GetBytes (text);  //this is the content as byte array
			Debug.Log (text + "  Len:" + text.Length);
			txt.text = text;

			SendMessages.Instance.SendPacket (byteText);
		}
	}

	// Update is called once per frame
	void Update () {
		if (!sender) {
			RecieveMessages.messageRecieved += MessageRecieved;
		} else {
			//test ();
		}
	}

	public void MessageRecieved(byte[] message) {
		string CurrMessage = System.Text.Encoding.UTF8.GetString (message);
		txt.text = CurrMessage;
	}
}
