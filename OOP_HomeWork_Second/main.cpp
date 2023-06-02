#include "animal.h"
#include "Dog.h"
#include "AnimalEdit.h"

int main() {
	Dog* dog1 = new Dog();

	cout << AnimalEdit::convert_information(dog1) << endl;

	return 0;

}