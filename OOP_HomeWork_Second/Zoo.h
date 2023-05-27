//#pragma once
//#include "herbivorous.h"
//#include "predator.h"
//
//class Zoo {
//public:
//	static const int DEFAULT_SIZE = 15;  // Допустим такой момент, что существует закон на ограничение кол-ва животных в зоо-парках для сохранения экологии и для наработки моего скилла :)
//	static const int DEFAULT_MAX_RATING = 100;  
//private:
//	static int count_zoo;
//	Animal animals[DEFAULT_SIZE];
//	string name; //Название
//	int size;
//	int rating;// рейтинг места от 0 до 100;
//public:
//
//	Zoo();
//	Zoo(Animal* animals, string name, int size, int rating);
//	Zoo(string name, int rating);
//	~Zoo();
//
//	string get_name();
//	void set_name(string name);
//
//	int get_size();
//	void set_size(int size);
//
//	int get_rating();
//	void set_rating(int rating);
//
//	void add_animal(Animal animal);
//	static int get_count_zoo();
//
//
//	string converting_to_string();
//};