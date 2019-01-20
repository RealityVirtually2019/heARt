using UnityEngine;
using System;
using System.Net.Sockets;
using System.Net;
using System.Collections;

public class RecieveMessages : MonoBehaviour {

	int receiverPort = 1998;

	public delegate void OnMessageRecieved(byte[] result);
	public static OnMessageRecieved messageRecieved;

	UdpClient receiver;
	byte[] currPacket;

	void Start() {
		// Create UDP client
		receiver = new UdpClient(receiverPort);
		receiver.BeginReceive(DataReceived, receiver);
	}

	void Update(){
		if (currPacket.Length > 0) {
			Debug.Log("Message recieved: " + currPacket);
			messageRecieved.Invoke(currPacket);
			currPacket = null;
		}
	}

	private void OnApplicationQuit() {
		receiver.Close();
	}

	// This is called whenever data is received
	private void DataReceived(IAsyncResult ar) {

		Debug.Log ("bgn gfhtf");
		UdpClient c = (UdpClient)ar.AsyncState;
		IPEndPoint receivedIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
		Byte[] receivedBytes = c.EndReceive(ar, ref receivedIpEndPoint);

		//string packet = System.Text.Encoding.UTF8.GetString (receivedBytes, 0, 20);
		currPacket = receivedBytes;

		// Restart listening for udp data packages
		c.BeginReceive(DataReceived, ar.AsyncState);
	}
}