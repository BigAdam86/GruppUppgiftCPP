#include "Devices.h"

Devices::Devices() {

}

Devices::Devices(string name) {
	d_name = name;
	
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