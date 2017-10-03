#include <iostream>
#include "Cloud.h"
#include "Devices.h"
using namespace std;

int main() {
	
	Cloud MainCloud;
	
	Devices d1("Sensor1");
	Devices d2("Sensor2");

	MainCloud.ConnectDevice(d1);
	MainCloud.ConnectDevice(d2);


/*
	int input = 0;
	cout << "Press [1] to view connected units." << endl;
	cout << "Press [2] to add a unit." << endl;
	cout << "Press [3] to remove a unit." << endl;
	cout << "Press [4] to view the dashboard." << endl;
	cout << "Press [5] to quit." << endl;

	do {
		switch (input) {
		case 1:
			//viewConnected();
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
		//	viewDashboard();
			break;
		default:
			cout << "Bitch Please!";
			break;
		}
	} while (input != 5);
	*/

	return 0;
}