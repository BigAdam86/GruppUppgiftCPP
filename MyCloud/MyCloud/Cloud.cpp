#include "Cloud.h"
#include "Devices.h"
#include <iostream>

Cloud::Cloud() {
	//do you really need some?
}

void Cloud::initDashboard(Devices x) {
	static int counter = 0;
	counter++;
	AllDevices[counter] = x;
	int control = AllDevices[counter].getId();
	//cout << "Confirmed ID: " << control << endl;

}

void Cloud::viewConnected() {
	cout << "Function not yet implemented" << endl;
}

void Cloud::viewDashboard() {
	for (int i = 1; i < 3; i++) {
	int pID = AllDevices[i].getId();
	string pName = AllDevices[i].getName();
	bool pStatus = AllDevices[i].getStatus();
	cout << pID << pName << pStatus << endl;
	}
}

void SetupDevice() {

}

void Cloud::ConnectDevice(Devices x) {
	static int counter = 0;
	counter++;
	ConnectedDevices[counter] = x;
	string print_name = ConnectedDevices[counter].getName();
	cout << "Confirmed: " << print_name << endl;
}

void Cloud::SetupDevice() {

}

void Cloud::DisconnectDevice(Devices x) {
	cout << "Function not yet implemented.." << endl;
}

void Cloud::PrintWelcome() {
	cout << "Welcome!" << endl;
}

