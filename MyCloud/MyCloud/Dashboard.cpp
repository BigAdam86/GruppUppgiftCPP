#include <iostream>
#include "Dashboard.h"
#include "Cloud.h"
#include "Devices.h"
using namespace std;


Dashboard::Dashboard() {

}

Dashboard::Dashboard(Cloud cloud) {
	(*this).moln = cloud;
}
void Dashboard::TurnOff(int id) { // metod f�r att st�nga av komponenter.
	bool status = false;
	for (auto it = moln.allDevices.begin(); it != moln.allDevices.end(); ++it)
	{
		int key = it->first;
		Devices& value = it->second;
		int idz = value.getId();
		if (idz == id) {
			value.setStatus(status);
		}
	}
}
void Dashboard::DashboardMenu() // Fr�ga anv�ndaren vad hen vill g�ra st�nga av eller s�tta p�
{
	int input;
	do {
		cout << "Vad vill du g�ra?" << endl;
		moln.ViewDash();
		cin >> input;
		switch (input)
		{
		case 1:
			
			break;
		}
		
	} while (input != 5);
}

