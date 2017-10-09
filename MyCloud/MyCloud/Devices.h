
#pragma once
#ifndef Devices_h
#define Devices_h
#include<iostream>

using namespace std;		

class Devices {
public:
	int d_id;						//Enhetens ID
	string d_name;					//Enhetens Namn
	bool d_status;					//Enhetens Status (Connected/Disconnected)
public:
	Devices();
	Devices(int , string , bool);	//Default Constructor
	
	void setId(int);				//Skriver till d_id
	void setName(string);			//Skriver till d_name
	void setStatus(bool);			//Skriver till d_status

	int getId();					//Returnerar DeviceID(d_id)
	string getName();				//Returnerar DeviceName(d_name)
	bool getStatus();				//Returnerar DeviceStatus(d_status)
};


#endif //Devices.h

