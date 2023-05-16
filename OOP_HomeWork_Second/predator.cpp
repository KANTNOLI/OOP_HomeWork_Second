#include "predator.h"

Predator::Predator() {
	food = "The animal is friendly but hungry";
	danger = 0.00;
}
Predator::Predator(string food2, int danger2) {
	food = food2;
	danger = danger2;
}
Predator::~Predator() {

}

string Predator::get_food() {
	return food;
}
void Predator::set_food(string food2) {
	food = food2;
}

int Predator::get_danger() {
	return danger;
}
void Predator::set_danger(int danger2) {
	danger = danger2;
}

string Predator::converting_to_string() {
	return "Type: Predator \nName: " + get_name() + "\nWeight: " + to_string(get_weight()) + "\nVoracity: " + to_string(get_voracity()) + "\nFood: " + food + "\nDanger: " + to_string(danger) + "/100";
}
