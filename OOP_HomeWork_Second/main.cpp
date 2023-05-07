#include "Zoo.h"

int main() {
	Zoo zoo1("Forest", 87);
	Zoo zoo2("No Forest", 87);
	Zoo zoo3("No No Forest", 87);
	Animal a1("Leon", 25, 5);
	Animal a2("Tiger", 20, 4);
	Animal a3("Puma", 15, 6);

	zoo1.add_animal(a3);
	zoo1.add_animal(a3);
	zoo1.add_animal(a2);
	zoo1.add_animal(a1);

	zoo2.add_animal(a1);
	zoo2.add_animal(a3);
	zoo2.add_animal(a3);
	zoo2.add_animal(a2);

	zoo3.add_animal(a1);
	zoo3.add_animal(a2);
	zoo3.add_animal(a3);
	zoo3.add_animal(a3);

	cout << zoo1.converting_to_string() << endl << endl;
	cout << zoo2.converting_to_string() << endl << endl;
	cout << zoo3.converting_to_string() << endl << endl;

	cout << "Count zoo: " << Zoo::get_count_zoo() << endl;
	return 0;
}