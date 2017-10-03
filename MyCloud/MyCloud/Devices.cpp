#include "Devices.h"

Devices::Devices() {
	//Default Constructor
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
	if (/*something*/) {
		return true;
	}
	else {
		return false;
	}
}