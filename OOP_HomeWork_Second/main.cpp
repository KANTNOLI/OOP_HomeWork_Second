#include "animal.h"
#include "herbivorous.h"
#include "predator.h"
#include "foodShop.h"

int main() {
	Animal anim1("Leon", 5, 15);
	Herbivorous anim2("Volf", 16, 5, "enem", 1);
	Predator anim3("Sheep", 3, 2, "fa", 3);

	Animal* animal = new Animal[10];

	animal[0] = anim1; 
	animal[1] = anim2;  
	animal[2] = anim3; 
 
	cout <<  calculateTotalFood(animal, 3) << endl;

	return 0;

}