using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Randomizer : MonoBehaviour
{
    public Text HR;
    public Text RR;
    public Text Sp02;
    public Text SBP;
    public Text DBP;
    public Text Temp;
    // Use this for initialization
    void Start()
    {
        InvokeRepeating("textChange", 0, 1);
    }

    // Update is called once per frame
    int currentHR;

    void Update()
    {

    }
    public void textChange()
    {
        HR.text = Random.Range(50, 90).ToString();
        RR.text = Random.Range(16, 20).ToString();
        Sp02.text = Random.Range(95, 99).ToString();
        SBP.text = Random.Range(68, 80).ToString();
        DBP.text = Random.Range(108, 120).ToString();
        Temp.text = Random.Range(98, 99).ToString();

    }
}
