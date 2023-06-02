#pragma once
#include "main.h"

class Animal {
public:

	virtual double calculate_calories();
	virtual string description();
	virtual string draw() = 0;

	//Animal() : name("Unknown animal"), weight(0), voracity(0) {};
	//Animal(string name, int weight, double voracity) : name(name), weight(weight), voracity(voracity) {};
	//~Animal();

	//string get_name();
	//void set_name(string name);

	//int get_weight();
	//void set_weight(int weight);

	//int get_voracity();
	//void set_voracity(double voracity);

	//string converting_to_string();
};