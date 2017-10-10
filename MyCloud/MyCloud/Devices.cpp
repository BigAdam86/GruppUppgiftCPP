#include "Devices.h"
#include "Dashboard.h"

Devices::Devices() {
}

Devices::Devices(int d_id, string d_name, bool d_status) {
	this->d_name = d_name;
	this->d_id = d_id;
	this->d_status = d_status;
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