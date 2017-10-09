#include <string>
#include <iostream>
#include "Cloud.h"
#include "Devices.h"

#pragma once
#ifndef Dashboard_h
#define Dashboard_h
using namespace std;

class Dashboard : public Cloud, public Devices{
public:

	Cloud moln;

public:
			Dashboard();
			Dashboard(Cloud);				//Default Constructor
	   void DashboardMenu();//Huvudmenyn för Dashboard
	   void TurnOff(int);
};
#endif