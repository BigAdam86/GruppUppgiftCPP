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
	Devices ConnectedDevices[100];
	Devices AllDevices[100];

public:
	Cloud();					//Default Constructor

	void viewConnected();		//Meny för att visa anslutna enheter
	void ViewDevices();
	void SetupDevice();
	void DisconnectDevice();		//Tar bort en enhet

	static void PrintWelcome();		//Välkomstmeddelande
};

#endif