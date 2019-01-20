using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;


public class InteractionController : MonoBehaviour
{

    public AudioSource _inputAudioSource;

    public GameObject CubePrefab;
    public bool StartedOnce;
    private GameObject Microphone3D;
    private int HandCounter;
    private PrivilegeRequester _privilegeRequester;

    // Use this for initialization
    void Start()
    {
        StartedOnce = false;
        HandCounter = 0;
    }

    void Awake()
    {
        // Before enabling the microphone, the scene must wait until the privileges have been granted.
        _privilegeRequester = GetComponent<PrivilegeRequester>();

        _privilegeRequester.OnPrivilegesDone += HandleOnPrivilegesDone;
    }

    // Update is called once per frame
    void Update()
    {
        if (MLHands.IsStarted)
        {
            if (MLHands.Left.KeyPose == MLHandKeyPose.Pinch || MLHands.Right.KeyPose == MLHandKeyPose.Pinch)
            {
                HandCounter = 0;
                if (!StartedOnce)
                {
                    print("recording start");
                    _inputAudioSource.clip = Microphone.Start(Microphone.devices[0], true, 60, 48000);
                    StartedOnce = true;
                    Microphone3D = Instantiate(CubePrefab, MLHands.Left.Middle.Tip.Position, Quaternion.identity);
                    //Begin Recording Audio

                }
            }
            else
            {
                HandCounter++;
                if (HandCounter > 30)
                {
                    print("Recording ENDDDDD");
                    Destroy(Microphone3D);
                    if (StartedOnce)
                    {
                        //Stop Recording Audio
                        Microphone.End(Microphone.devices[0]);

                        //Save Audio
                        _inputAudioSource.Play();
                    }

                    StartedOnce = false;
                    HandCounter = 0;
                }
            }
        }
    }
    private void HandleOnPrivilegesDone(MLResult result)
    {
        if (!result.IsOk)
        {
            if (result.Code == MLResultCode.PrivilegeDenied)
            {
                Instantiate(Resources.Load("PrivilegeDeniedError"));
            }

            Debug.LogErrorFormat("Error: AudioCaptureExample failed to get all requested privileges, disabling script. Reason: {0}", result);
            enabled = false;
            return;
        }

        //_canCapture = true;
        Debug.Log("Succeeded in requesting all privileges");

        //UpdateStatus();
    }
}
