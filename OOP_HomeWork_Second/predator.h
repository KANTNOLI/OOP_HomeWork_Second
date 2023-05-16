#pragma once
#include "animal.h"

class Predator : Animal 
{
private: 
	string food;
	int danger; // percentage - процентное соотношение 0 - 100
public: 

	Predator();
	Predator(string food2, int danger2);
	~Predator();

	string get_food();
	void set_food(string food2);

	int get_danger();
	void set_danger(int danger2);

	string converting_to_string();

};

