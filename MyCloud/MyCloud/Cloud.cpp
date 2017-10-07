#include "Cloud.h"
#include "Devices.h"
#include "Dashboard.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <map>

using namespace std;
Cloud::Cloud() {
	//do you really need some?
}

void Cloud::viewConnected() {
	for (auto it = allDevices.begin(); it != allDevices.end(); ++it)
	{
		int key = it->first;
		Devices& value = it->second;
		if (value.getStatus() == 1) {
			cout << "Name: " << value.getName() << endl;
			cout << "ID: " << value.getId() << endl;
			cout << "Status [1]= ON, [0] = OFF: " << value.getStatus() << endl;
		}
		else if (value.getStatus() == 0) {
			cout << "no devices connected" << endl;
		}
		else {
			cout << "No devices connected" << endl;
		}
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
}

void Cloud::DisconnectDevice() {
	int id;
	cout << "Enter id for device you want to delete"  << endl;
	cin >> id;
	allDevices.erase(id); //f�r att ta bort i map:en
	cout << "device with id:"<< id  <<" removed.."<< endl;
}

void Cloud::PrintWelcome() {
	cout << "      *******Welcome!*******" << endl;
}

void Cloud::ViewDevices() {
	for (auto it = allDevices.begin(); it != allDevices.end(); ++it)
	{
		int key = it->first;
		Devices& value = it->second;
		cout <<"Name: "<< value.getName() << endl;
		cout <<"ID: "<< value.getId() << endl;
		cout <<"Status: "<< value.getStatus() << endl;
	}
}

