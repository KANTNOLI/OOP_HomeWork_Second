#include "Zoo.h"

int main() {
	Zoo zoo("Forest", 87);
	Animal a1("Leon", 25, 5);
	Animal a2("Tiger", 20, 4);

	zoo.add_animal(a1);
	zoo.add_animal(a2);
	zoo.add_animal(a1);
	zoo.add_animal(a2);
	zoo.add_animal(a1);
	zoo.add_animal(a2);

	cout << zoo.converting_to_string() << endl;
	return 0;
}