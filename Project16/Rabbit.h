#pragma once
#include "Living.h"
class Rabbit :public Living
{
	int age;
	int agecap;
public:
	Rabbit(int _age, string _location); 
	virtual void Print();
};

