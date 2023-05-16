#include "zoo.h"

int main() {
	Predator pr("tt", 10);
	pr.set_name("fd");
	cout << pr.converting_to_string() << endl;

	cout << "Count zoo: " << Zoo::get_count_zoo() << endl;
	return 0;
}