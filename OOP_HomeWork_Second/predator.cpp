#include "predator.h"

Predator::~Predator() {

}

string Predator::get_food() {
	return food;
}
void Predator::set_food(string food) {
	this->food = food;
}

int Predator::get_danger() {
	return danger;
}
void Predator::set_danger(int danger) {
	this->danger = danger;
}

string Predator::converting_to_string() {
	return "Type: Predator \nName: " + get_name() + "\nWeight: " + to_string(get_weight()) + "\nVoracity: " + to_string(get_voracity()) + "\nFood: " + food + "\nDanger: " + to_string(danger) + "/100";
}
