#include "Cloud.h"
#include <iostream>


Cloud::Cloud() {
	//do you really need some?
}

void Cloud::ConnectDevice(Devices x) {
	static int counter = 0;
	counter++;
	ConnectedDevices[counter] = x;
	string print_name = ConnectedDevices[counter].getName();
	cout << "Confirmed: " << print_name << endl;
}

void Cloud::DisconnectDevice() {

}

void Cloud::PrintWelcome() {

}