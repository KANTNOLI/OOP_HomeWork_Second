#include "herbivorous.h"

Herbivorous::~Herbivorous() {

}

string Herbivorous::get_enemies() {
	return enemies;
}
void Herbivorous::set_enemies(string enemies) {
	this->enemies = enemies;
}

int Herbivorous::get_self_defence() {
	return self_defence;
}
void Herbivorous::set_self_defence(int self_defence) {
	this->self_defence = self_defence;
}

string Herbivorous::converting_to_string() {
	return "Type: Predator \nName: " + get_name() + "\nWeight: " + to_string(get_weight()) + "\nVoracity: " + to_string(get_voracity()) + "\nEnemies: " + enemies + "\nSelf_defence: " + to_string(self_defence);

}