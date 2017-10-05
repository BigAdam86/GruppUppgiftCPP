#include "Cloud.h"
#include "Devices.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <map>

using namespace std;

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
	for (int i = 1; i < 5; i++) {
	int pID = AllDevices[i].getId();
	string pName = AllDevices[i].getName();
	bool pStatus = AllDevices[i].getStatus();
	//cout << pID << pName << pStatus << endl;
	}
}

void Cloud:: SetupDevice() {
	int id;
	cout << "enter id:" << endl;
	cin >> id;
	string name;
	cout << "enter name:" << endl;
	cin >> name;
	bool status;
	cout << "enter status 0 = OFF, 1 = ON:" << endl;
	cin >> status;

	Devices d(id, name, status);
	allDevices[id] = d;
	//allDevices.erase[id]; för att tabort i map:en


}

void Cloud::ConnectDevice(Devices x) {
	static int counter = 0;
	counter++;
	ConnectedDevices[counter] = x;
	string print_name = ConnectedDevices[counter].getName();
	cout << "Confirmed: " << print_name << endl;
}


void Cloud::DisconnectDevice() {
	int id;
	cout << "Enter id for device you want to delete"  << endl;
	cin >> id;
	allDevices.erase(id); //för att tabort i map:en
	cout << "device with id:"<< id  <<" removed.."<< endl;
}

void Cloud::PrintWelcome() {
	cout << "Welcome!" << endl;
}

void Cloud::ViewDevices() {
	for (auto it = allDevices.begin(); it != allDevices.end(); ++it)
	{
		int key = it->first;
		Devices& value = it->second;
		cout << value.getName() << endl;
		cout << value.getId() << endl;
		cout << value.getStatus() << endl;
	}
}

