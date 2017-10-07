#include <iostream>
#include "Dashboard.h"
#include "Cloud.h"
#include "Devices.h"

Dashboard::Dashboard() {
	//Default Constructor
}

void Dashboard::DashboardMenu() {
	for (auto it = allDevices.begin(); it != allDevices.end(); ++it)
	{
		int key = it->first;
		Devices& value = it->second;
		cout << "Name: " << value.getName() << endl;
		cout << "ID: " << value.getId() << endl;
		cout << "Status: " << value.getStatus() << endl;
	}
}

