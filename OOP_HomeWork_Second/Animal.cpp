#include "animal.h"



Animal::Animal() {
	name = "noname";
	weight = 10;
	voracity = 2;
}
Animal::Animal(string nm) {
	name = nm;
	weight = 10;
	voracity = 2;
}
Animal::Animal(string nm, int wght, int vcity) {
	name = nm;
	weight = wght;
	voracity = vcity;
}
Animal::~Animal() {

}

string Animal::get_name() {
	return name;
}
void Animal::set_name(string nm) {
	name = nm;
}

int Animal::get_weight() {
	return weight;
}
void Animal::set_weight(int wght) {
	weight = wght;
}

int Animal::get_voracity() {
	return voracity;
}
void Animal::set_voracity(int vcity) {
	voracity = vcity;
}

string Animal::converting_to_string() {
	return "Name: " + name + "\nWeight: " + to_string(weight) + "\nVoracity: " + to_string(voracity);
}