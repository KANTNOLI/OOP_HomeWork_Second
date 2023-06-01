#pragma once
#include "animal.h"
class Dog : public Animal
{
private:
	double weight;
	double foodEaten; // В ккал
	double averageCaloriesBurned;
public:
	Dog() : weight(10), foodEaten(900), averageCaloriesBurned(900) {}; //В 1 кг жира - 9.000 ккал 
	Dog(double weight, double averageCaloriesBurned) :
		weight(weight = weight > 0 ? weight : 10),
		foodEaten(foodEaten = foodEaten > 0 ? foodEaten : 0),
		averageCaloriesBurned(averageCaloriesBurned = averageCaloriesBurned > 0 ? averageCaloriesBurned : 900) {}; //В 1 кг жира - 9.000 ккал 

	double calculate_calories();
	string description();
	string draw();

};

