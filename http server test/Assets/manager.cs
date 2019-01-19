using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class manager : MonoBehaviour
{

    //10.189.126.108
    public Text address;
    // Use this for initialization
    void Start()
    {
        StartCoroutine(uploadPNG());
        address.text = "starting";
    }

    void Update()
    {

    }

    // Update is called once per frame
    IEnumerator uploadPNG()
    {



        int width = Screen.width;
        int height = Screen.height;

        Texture2D tex = new Texture2D(width, height, TextureFormat.RGB24, false);

        tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
        tex.Apply();
        byte[] bytes = tex.EncodeToPNG();

        WWWForm form = new WWWForm();
        form.AddBinaryData("image", bytes);
        WWW w = new WWW("http://f8907a7b.ngrok.io/facerecognition/", form);

        yield return w;
        if (w.error != null)
        {
            address.text = w.ToString();
        }
        else
        {
            address.text = "Finished uploading";
        }
        //	UnityWebRequest www = UnityWebRequest.Put("url"


    }
}
