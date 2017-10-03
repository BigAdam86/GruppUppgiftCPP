#include <string>
using namespace std;

#pragma once
#ifndef cloud_h
#define cloud_h

class Cloud {
private:
	string ConnectedDevices[100];
	//Dashboard? Friend?
	//Devices? Friend?
public:
	Cloud(); //Default Constructor
	void ConnectDevice();
	void DisconnectDevice();

	void PrintWelcome();

};

#endif