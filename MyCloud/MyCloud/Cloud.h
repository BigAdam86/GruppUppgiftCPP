#include "Devices.h"
#include <iostream>
#include <map>
#pragma once
#ifndef cloud_h
#define cloud_h

using namespace std;



class Cloud {
public:
	map<int, Devices> allDevices;
	//Devices ConnectedDevices[100];
	//Devices AllDevices[100];

public:
	Cloud();					//Default Constructor

	void initDashboard(Devices);
	void viewConnected();		//Meny för att visa anslutna enheter
	void viewDashboard();		//Meny för att visa samtliga enheter
	void ViewDevices();
	void SetupDevice();
	void ConnectDevice(Devices);		//Skapar en enhet
	void DisconnectDevice();		//Tar bort en enhet

	static void PrintWelcome();		//Välkomstmeddelande
	

};

#endif