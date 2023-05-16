#include "herbivorous.h"

Herbivorous::Herbivorous() {
	enemies = "Most likely, this is a Dodo animal, it has no enemies!";
	self_defence = 0;
}
Herbivorous::Herbivorous(string enemies2, int self_defence2) {
	enemies = enemies2;
	self_defence = self_defence2;
}
Herbivorous::~Herbivorous() {

}

string Herbivorous::get_enemies() {
	return enemies;
}
void Herbivorous::set_enemies(string enemies2) {
	enemies = enemies2;
}

int Herbivorous::get_self_defence() {
	return self_defence;
}
void Herbivorous::set_self_defence(int self_defence2) {
	self_defence = self_defence2;
}

string Herbivorous::converting_to_string() {
	return "Type: Predator \nName: " + get_name() + "\nWeight: " + to_string(get_weight()) + "\nVoracity: " + to_string(get_voracity()) + "\nEnemies: " + enemies + "\nSelf_defence: " + to_string(self_defence);

}