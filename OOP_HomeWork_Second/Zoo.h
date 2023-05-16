#pragma once
#include "predator.h"
#include "animal.h"

class Zoo {
public:
	static const int DEFAULT_SIZE = 15;  // �������� ����� ������, ��� ���������� ����� �� ����������� ���-�� �������� � ���-������ ��� ���������� �������� � ��� ��������� ����� ������ :)
	static const int DEFAULT_MAX_RATING = 100;  
private:
	static int count_zoo;
	Animal animals[DEFAULT_SIZE];
	string name; //��������
	int size;
	int rating;// ������� ����� �� 0 �� 100;
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
	static int get_count_zoo();


	string converting_to_string();
};