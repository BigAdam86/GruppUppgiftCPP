#include <string>
#include <iostream>
#include "Cloud.h"
#include "Devices.h"

#pragma once
#ifndef Dashboard_h
#define Dashboard_h
using namespace std;

class Dashboard :public Cloud, public Devices{
private:
	string title;
public:
	Dashboard();				//Default Constructor

	void DashboardMenu();			//Huvudmenyn för Dashboard



};

#endif