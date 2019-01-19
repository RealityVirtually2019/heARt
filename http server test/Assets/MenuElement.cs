using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuElement : MonoBehaviour {

	public Text text;
	Texture2D tex;
	public void ButtonPressed(byte[] message) {
		tex = new Texture2D (1920, 1080, TextureFormat.PVRTC_RGB4, false);
		tex.LoadRawTextureData (message);
		tex.Apply();
		GetComponent<Renderer> ().material.mainTexture = tex;
		text.text = "Received!!";
	}
}