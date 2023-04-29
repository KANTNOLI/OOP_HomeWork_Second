#pragma once

#include "animal.h"

class Zoo {
public:
	static const int DEFAULT_SIZE = 15;  // �������� ����� ������, ��� ���������� ����� �� ����������� ���-�� �������� � ���-������ ��� ���������� �������� � ��� ��������� ����� ������ :)
	static const int DEFAULT_MAX_RATING = 100;  // �������� ����� ������, ��� ���������� ����� �� ����������� ���-�� �������� � ���-������ ��� ���������� �������� � ��� ��������� ����� ������ :)
private:
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

	string converting_to_string();
};