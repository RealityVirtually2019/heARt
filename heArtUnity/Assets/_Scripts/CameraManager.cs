using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour {

	public SceneManager sm;
	bool isScanning = false, done = false;
	float t = 3;
	// Use this for initialization
	void Start () {
		
	}
	
	void Update () {
		if (isScanning) {
			if (t < 0) {
				if (!done) {
					sm.isScanComplete = true;
					done = true;
				}
 			} else {
				t -= Time.deltaTime;
			}
		}
	}


	void OnTriggerEnter(Collider Col){
		if (Col.CompareTag ("face")) {
			isScanning = true;
		}
	}

	void OnTriggerExit(Collider col){
		if (col.CompareTag ("face")) {
			isScanning = false;
			t = 3;
		}
	}
}
