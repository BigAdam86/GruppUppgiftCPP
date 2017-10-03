#include <iostream>
#include "Cloud.h"
#include "Devices.h"
using namespace std;

int main() {
	
	Cloud MainCloud;

	Devices d1("Sensor1");
	Devices d2("Sensor2");
	Devices d3("Light1");
	Devices d4("Light2");

	
	
	int input = 0;
	do {
		
		cout << "Press [1] to view connected units." << endl;
		cout << "Press [2] to connect a predefined unit." << endl;
		cout << "Press [3] to disconnect a unit." << endl;
		cout << "Press [4] to view avaliable devices." << endl;
		cout << "Press [5] to quit." << endl;

		cin >> input;
		switch (input) {
		case 1:
			MainCloud.viewConnected();
			break;
		case 2:
			MainCloud.SetupDevice();
			break;
		case 3:
			MainCloud.initDashboard(d1);
			MainCloud.initDashboard(d2);
			MainCloud.initDashboard(d3);
			MainCloud.initDashboard(d4);
			cout << "All devices added to dashboard!" << endl;
			break;
		case 4:
			MainCloud.viewDashboard();
			break;
		default:
			cout << "Bitch Please!\n";
			break;
		}
	} while (input != 5);


	return 0;
}