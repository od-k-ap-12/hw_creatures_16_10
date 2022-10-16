#pragma once
#include "Living.h"
class Fox:public Living
{
	int age;
	int agecap;
	static int count;
public:
	Fox(int _age,string _location);
	virtual void Print();
	static int GetCount();
};

