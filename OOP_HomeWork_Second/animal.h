#pragma once
#include "main.h"

class Animal {
private:
	string name; //�������� 
	int weight; //���
	int voracity; //������������� - �� \ �
public:

	Animal();
	Animal(string nm);
	Animal(string nm, int wgth, int vcity);
	~Animal();

	string get_name();
	void set_name(string nm);

	int get_weight();
	void set_weight(int wght);

	int get_voracity();
	void set_voracity(int vcity);

	string converting_to_string();
};