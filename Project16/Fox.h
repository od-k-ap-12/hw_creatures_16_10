#pragma once
#include "Living.h"
class Fox:public Living
{
	int age;
	int agecap;
	static int count;
public:
	Fox();
	~Fox();
	Fox(int _age,string _location);
	virtual void Print();
	static int GetCount();
	static void SetCount(int _count);
	int GetAge();
	int GetAgeCap();
};

