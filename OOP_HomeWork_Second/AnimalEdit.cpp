#include "AnimalEdit.h"


string AnimalEdit::convert_information(Animal* animal) {
	string msg = animal->description();
	msg += "\nAverage daily calorie turnover: " + to_string(animal->calculate_calories());  
	msg += "\n" + animal->draw();
	return msg;
}
