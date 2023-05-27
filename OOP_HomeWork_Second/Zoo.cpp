//#include "zoo.h"
//
//int Zoo::count_zoo = 0;
//
//Zoo::Zoo() {
//	name = "noname";
//	size = 0;
//	rating = 0;
//	count_zoo++;
//}
//Zoo::Zoo(Animal* anim, string nm, int sz, int rate) {
//	name = nm;
//	if (sz <= DEFAULT_SIZE)
//	{
//		size = sz;
//		for (int i = 0; i < sz; i++)
//		{
//			animals[i] = anim[i];
//		}
//	}
//	else {
//		size = 0;
//	}
//	rating = rate;
//	count_zoo++;
//}
//Zoo::Zoo(string nm, int rate) {
//	name = nm;
//	size = 0;
//	if (rate <= DEFAULT_MAX_RATING)
//	{
//		rating = rate;
//	}
//	else {
//		rating = 0;
//	}
//	count_zoo++;
//}
//Zoo::~Zoo() {
//	count_zoo--;
//}
//
//string Zoo::get_name() {
//	return name;
//}
//void Zoo::set_name(string nm) {
//	name = nm;
//}
//
//int Zoo::get_size() {
//	return size;
//}
//void Zoo::set_size(int sz) {
//	size = sz;
//}
//
//int Zoo::get_rating() {
//	return rating;
//}
//void Zoo::set_rating(int rate) {
//	rating = rate;
//}
//
//void Zoo::add_animal(Animal animal) {
//	if (size < DEFAULT_SIZE)
//	{
//		animals[size] = animal;
//		size++;
//	}
//}
//
//int Zoo::get_count_zoo() {
//	return count_zoo;
//}
//
//string Zoo::converting_to_string() {
//	string msg = "Zoo: " + name + "\nAnimals: ";
//	for (int i = 0; i < size; i++)
//	{
//		msg += "\n" + animals[i].converting_to_string();
//	}
//	msg += "\nCount animals: " + to_string(size) + "\nRating: " + to_string(rating) + "/100";
//
//	return msg;
//}