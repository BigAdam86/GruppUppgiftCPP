#include <iostream>
#include "Dashboard.h"
#include "Cloud.h"
#include "Devices.h"
using namespace std;

Dashboard::Dashboard() {
	//ViewDevices();

}

void Dashboard::DashboardMenu()
{
	Cloud::ViewDevices();
}

