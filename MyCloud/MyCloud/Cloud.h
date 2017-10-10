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
		void viewConnected();		//Meny f�r att visa anslutna enheter
		void ViewDevices();			//Skriver ut enheter.
		void SetupDevice();			//Anv�ndare matar in v�rden.
		void DisconnectDevice();	//Tar bort en enhet.
		void PrintWelcome() const;	//V�lkomstmeddelande.
		void ViewDash();
};

#endif //Cloud.h