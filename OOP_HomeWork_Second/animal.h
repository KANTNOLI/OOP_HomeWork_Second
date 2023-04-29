#pragma once
#include "main.h"

class Animal {
private:
	string name; //название 
	int weight; //вес
	double voracity; //прожорливость - кг \ д
public:

	Animal();
	Animal(string nm);
	Animal(string nm, int wgth, double vcity);
	~Animal();

	string get_name();
	void set_name(string nm);

	int get_weight();
	void set_weight(int wght);

	int get_voracity();
	void set_voracity(double vcity);

	string converting_to_string();
};