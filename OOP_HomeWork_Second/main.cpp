#include "animal.h"
#include "herbivorous.h"
#include "predator.h"
#include "foodShop.h"

int main() {
	Animal anim1("Leon", 5, 15);
	Animal anim2("Volf", 16, 5);
	Animal anim3("Sheep", 3, 2);

	Herbivorous* animals[3] = { anim1 , anim2 , anim3 }; 
	
}