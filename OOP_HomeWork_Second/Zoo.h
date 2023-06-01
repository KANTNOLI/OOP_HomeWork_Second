#pragma once
#include "herbivorous.h"
#include "predator.h"

class Zoo {
public:
	static const int DEFAULT_SIZE = 15;  // ƒопустим такой момент, что существует закон на ограничение кол-ва животных в зоо-парках дл€ сохранени€ экологии и дл€ наработки моего скилла :)
	static const int DEFAULT_MAX_RATING = 100;  
private:
	static int count_zoo;
	Animal* animals[DEFAULT_SIZE];
	string name; //Ќазвание
	int size;
	int rating;// рейтинг места от 0 до 100;
	int number_meals_day; //  ол-во еды в день дл€ животных
public:

	Zoo();
	Zoo(Animal* animal, string name, int size, int rating, int number_meals_day);
	~Zoo();

	string get_name();
	void set_name(string name);

	int get_size();
	void set_size(int size);

	int get_rating();
	void set_rating(int rating);

	void add_animal(Animal* animal);

	static int get_count_zoo();

	void set_number_meals_day(Animal* animal);
	int get_number_meals_day();

	string converting_to_string();
};