#include "animal.h"

string Animal::get_name() {
	return name;
}
void Animal::set_name(string name) {
	this->name = name;
}

int Animal::get_weight() {
	return weight;
}
void Animal::set_weight(int weight) {
	this->weight = weight;
}

int Animal::get_voracity() {
	return voracity;
}
void Animal::set_voracity(double voracity) {
	this->voracity = voracity;
}

string Animal::converting_to_string() {
	return "Name: " + name + "\nWeight: " + to_string(weight) + "\nVoracity: " + to_string(voracity);
}