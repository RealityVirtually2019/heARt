using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class MenuElement : MonoBehaviour {

	public Text text;
	Texture2D tex;
	//int index = 0;
	string CurrMessage;
	public void ButtonPressed(byte[] message) {
		//tex = new Texture2D (256, 256, TextureFormat.PVRTC_RGB4, false);
		//tex.LoadRawTextureData (message);
		//tex.Apply();
		//GetComponent<Renderer> ().material.mainTexture = tex;
		//text.text = message.ToString();
		CurrMessage = System.Text.Encoding.UTF8.GetString (message);

		text.text += CurrMessage + "/n";
		//File.WriteAllBytes ("C:\\Users\\tpura\\Desktop\\Unity Projects\\file.png", message);

		Debug.Log("received");
	}
}