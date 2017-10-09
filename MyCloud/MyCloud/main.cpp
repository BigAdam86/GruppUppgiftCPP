#include <iostream>
#include "Cloud.h"
#include "Devices.h"
#include "Dashboard.h"
using namespace std;

int main() {
	Cloud MainCloud;

	int input = 0;
	do {
		Dashboard Dash(MainCloud);

		cout << "Press [1] to view connected units." << endl;
		cout << "Press [2] to connect a unit." << endl;
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
			MainCloud.DisconnectDevice();
			break;
		case 4:
			Dash.DashboardMenu();
			break;
		default:
			cout << "Bitch Please!\n";
			break;
		}
	} while (input != 5);


	return 0;
}