#pragma once

#include "animal.h"

class Zoo {
public:
	static const int DEFAULT_SIZE = 15;  // Допустим такой момент, что существует закон на ограничение кол-ва животных в зоо-парках для сохранения экологии и для наработки моего скилла :)
	static const int DEFAULT_MAX_RATING = 100;  // Допустим такой момент, что существует закон на ограничение кол-ва животных в зоо-парках для сохранения экологии и для наработки моего скилла :)
private:
	Animal animals[DEFAULT_SIZE];
	string name; //Название
	int size;
	int rating;// рейтинг места от 0 до 100;
public:

	Zoo();
	Zoo(Animal* animal, string nm, int sz, int rate);
	Zoo(string nm, int rate);
	~Zoo();

	string get_name();
	void set_name(string nm);

	int get_size();
	void set_size(int sz);

	int get_rating();
	void set_rating(int rate);

	void add_animal(Animal animal);

	string converting_to_string();
};