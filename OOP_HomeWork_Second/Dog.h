#pragma once
#include "animal.h"
class Dog : public Animal
{
private:
	double weight;
	double foodEaten; // � ����
	double averageCaloriesBurned;
public:
	Dog() : weight(10), foodEaten(900), averageCaloriesBurned(900) {}; //� 1 �� ���� - 9.000 ���� 
	Dog(double weight, double averageCaloriesBurned) :
		weight(weight = weight > 0 ? weight : 10),
		foodEaten(foodEaten = foodEaten > 0 ? foodEaten : 0),
		averageCaloriesBurned(averageCaloriesBurned = averageCaloriesBurned > 0 ? averageCaloriesBurned : 900) {}; //� 1 �� ���� - 9.000 ���� 

	double calculate_calories();
	string description();
	string draw();

};

