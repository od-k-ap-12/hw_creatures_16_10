#pragma once
#include "Living.h"
class Rabbit :public Living
{
	int age;
	int agecap;
	static int count;
public:
	Rabbit();
	Rabbit(int _age, string _location); 
	virtual void Print();
	static void SetCount(int _count);
	int GetAge();
	int GetAgeCap();
	static int GetCount();
};

