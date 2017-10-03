#include <string>
using namespace std;

#pragma once
#ifndef Devices_h
#define Devices_h

class Devices {
private:
	int d_id;
	string d_name;
	bool d_status;
public:
	Devices(); //Default Constructor
	
	void setId(int);
	void setName(string);
	void setStatus(bool);

	int getId();
	string getName();
	bool getStatus();
};


#endif //Devices.h