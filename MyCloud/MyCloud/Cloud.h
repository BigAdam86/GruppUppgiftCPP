#pragma once
#ifndef cloud_h
#define cloud_h
#include <string>
#include "Devices.h"
#include "Dashboard.h"

using namespace std;



class Cloud {
public:
	
	Devices ConnectedDevices[100];
	Devices AllDevices[100];

public:
	Cloud();					//Default Constructor

	void initDashboard(Devices);
	void viewConnected();		//Meny för att visa anslutna enheter
	void viewDashboard();		//Meny för att visa samtliga enheter

	void SetupDevice();
	void ConnectDevice(Devices);		//Skapar en enhet
	void DisconnectDevice(Devices);		//Tar bort en enhet

	void PrintWelcome();		//Välkomstmeddelande
	

};

#endif