#pragma once
#include "animal.h"

class Herbivorous : public Animal
{
private:
	string enemies; //враг
	int self_defence; //самозащита % 

public:
	Herbivorous() : Animal("NoName", 0, 0), enemies("NoEnemies"), self_defence(0) {};
	Herbivorous(string name, int weight, double voracity, string enemies, int self_defence) : Animal(name, weight, voracity), enemies(enemies), self_defence(self_defence) {};
	~Herbivorous();

	string get_enemies();
	void set_enemies(string enemies);

	int get_self_defence();
	void set_self_defence(int self_defence);

	string converting_to_string();


};

