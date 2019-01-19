using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class GestureScript : MonoBehaviour {

	private bool OKHandPose = false;
	private float speed = 30.0f;
	private float distance = 2.0f;
	public GameObject cube;
	private MLHandKeyPose[] gestures;

	// Use this for initialization
	void Awake () {

		MLHands.Start ();

		gestures = new MLHandKeyPose[4];

		gestures [0] = MLHandKeyPose.Ok;
		gestures [1] = MLHandKeyPose.Fist;
		gestures [2] = MLHandKeyPose.OpenHandBack;
		gestures [3] = MLHandKeyPose.Finger;

		MLHands.KeyPoseManager.EnableKeyPoses (gestures, true, false);

		cube.SetActive (false);
	}

	bool GetGesture(MLHand hand, MLHandKeyPose type){
		if (hand != null) {
			if (hand.KeyPose == type) {
				if (hand.KeyPoseConfidence > 0.9f) {
					return true;
				}
			}
		}
		return false;
	}

	// Update is called once per frame
	void Update () {
		if (OKHandPose) {
			if (GetGesture (MLHands.Left, MLHandKeyPose.OpenHandBack) || GetGesture (MLHands.Right, MLHandKeyPose.OpenHandBack)) {
				cube.transform.Rotate (Vector3.up, speed * Time.deltaTime);
			}

			if (GetGesture (MLHands.Left, MLHandKeyPose.Fist) || GetGesture (MLHands.Right, MLHandKeyPose.Fist)) {
				cube.transform.Rotate (Vector3.up, -speed * Time.deltaTime);
			}

			if (GetGesture (MLHands.Left, MLHandKeyPose.Finger)) {
				cube.transform.Rotate (Vector3.right, speed * Time.deltaTime);
			}

			if (GetGesture (MLHands.Right, MLHandKeyPose.Finger)) {
				cube.transform.Rotate (Vector3.right, -speed * Time.deltaTime);
			}
		} else {
			if (GetGesture (MLHands.Left, MLHandKeyPose.Ok) || GetGesture (MLHands.Right, MLHandKeyPose.Ok)) {
				OKHandPose = true;
				cube.SetActive (true);
				cube.transform.position = transform.position + transform.forward * distance;
				cube.transform.rotation = transform.rotation;
			}
		}
	}

	void OnDestroy(){
		MLHands.Stop ();
	}
}
