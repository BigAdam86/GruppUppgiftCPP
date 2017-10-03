#pragma once
#ifndef cloud_h
#define cloud_h
#include <string>
#include "Devices.h"
#include "Dashboard.h"

using namespace std;



class Cloud {
private:
	
	Devices ConnectedDevices[100];
	
public:
	Cloud();					//Default Constructor

	void ConnectDevice(Devices);		//Skapar en enhet
	void DisconnectDevice();	//Tar bort en enhet

	void PrintWelcome();		//Välkomstmeddelande

};

#endif