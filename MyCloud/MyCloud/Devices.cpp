#include "Devices.h"
#include "Dashboard.h"

Devices::Devices() {

}

Devices::Devices(int d_id, string d_name, bool d_status) {
	this->d_name = d_name;
	this->d_id = d_id;
	this->d_status = d_status;
	static int device_counter = 0;
	device_counter++;
	d_id = device_counter;
	d_status = false;
}



void Devices::setId(int x) {
	d_id = x;
}

void Devices::setName(string str) {
	d_name = str;
}
void Devices::setStatus(bool status) {
	d_status = status;
}


int Devices::getId() {
	return d_id;
}

string Devices::getName() {
	return d_name;
}

bool Devices::getStatus() {
	return d_status;
}