using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Sockets;
using System.Net;
using System.Text;

public class SendMessages : MonoBehaviour {

	const string IP = "255.255.255.255";
	const int PORT_NUM = 1998;

	public static SendMessages Instance { get; private set; }

	private IPAddress serverAddr;
	private IPEndPoint endPoint;
	private Socket sock;
	private byte[] send_buffer;

	public MenuElement menu;

	private void Awake() {
		Instance = this;
	}

	void Start() {
		//InitSocket();
		sock = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
		sock.EnableBroadcast = true;
		serverAddr = IPAddress.Parse(IP);
		print(serverAddr);
		endPoint = new IPEndPoint(serverAddr, PORT_NUM);
	}

	void OnApplicationQuit() {
	
		//sock.Dispose ();
		sock.Close ();

	}
		

	public void SendPacket(byte[] data) {
		try {
			send_buffer = data;
			sock.SendTo(send_buffer, endPoint);
		} catch (SocketException s) {
			Debug.Log(s);
		}
		//menu.ButtonPressed (message);
	}
}