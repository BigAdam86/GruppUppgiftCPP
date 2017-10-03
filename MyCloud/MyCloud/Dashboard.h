#include <string>
#include "Cloud.h"

#pragma once
#ifndef Dashboard_h
#define Dashboard_h
using namespace std;

class Dashboard {
private:
	string title;
public:
	Dashboard();				//Default Constructor

	void viewConnected();		//Meny för att visa anslutna enheter
	void viewDashboard();		//Meny för att visa samtliga enheter

	void UserMenu();			//Huvudmenyn för Dashboard



};

#endif