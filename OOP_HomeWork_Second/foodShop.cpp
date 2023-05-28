#include "foodShop.h"

int calculateTotalFood(Animal* animals, int size) {
	int TotalFood = 0;
	for (int i = 0; i < size; i++)
	{
		TotalFood += animals[i].get_voracity();
	}

	return TotalFood;
}
