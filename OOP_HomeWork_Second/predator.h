#pragma once
#include "animal.h"

class Predator : public Animal 
{
private: 
	string food;
	int danger; // percentage - процентное соотношение 0 - 100
public: 

	Predator() : Animal("NoName", 0, 0), food("NoFood"), danger(0) {};
	Predator(string name, int weight, double voracity, string food2, int danger2) : Animal(name, weight, voracity), food(food), danger(danger) {};
	~Predator();

	string get_food();
	void set_food(string food);

	int get_danger();
	void set_danger(int danger);

	string converting_to_string();

};

