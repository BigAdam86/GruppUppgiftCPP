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

public:
			 Cloud();				//Default Constructor
		void viewConnected();		//Meny för att visa anslutna enheter
		void ViewDevices();			//Skriver ut enheter.
		void SetupDevice();			//Användare matar in värden.
		void DisconnectDevice();	//Tar bort en enhet.
		void PrintWelcome() const;	//Välkomstmeddelande.
		void ViewDash();
};

#endif //Cloud.h