#include "Dog.h"

double Dog::calculate_calories() {
	return foodEaten - averageCaloriesBurned; 
}
string Dog::description() {
	string msg = calculate_calories() >= 0 and calculate_calories() <= 500? "who is fine" : "who has problems with food";
	return "This is Dog - " + msg;
}
string Dog::draw() {
	return "dog is drawn";
}