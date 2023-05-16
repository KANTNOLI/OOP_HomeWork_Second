#pragma once
#include "animal.h"

class Herbivorous : Animal
{
private:
	string enemies; //враг
	int self_defence; //самозащита % 

public:
	Herbivorous();
	Herbivorous(string enemies2, int self_defence2);
	~Herbivorous();

	string get_enemies();
	void set_enemies(string enemies2);

	int get_self_defence();
	void set_self_defence(int self_defence2);

	string converting_to_string();


};

