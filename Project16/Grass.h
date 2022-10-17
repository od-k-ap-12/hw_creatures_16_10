#pragma once
#include "Living.h"
class Grass:public Living
{
	static int count;
public:
	Grass();
	Grass(string _location);
	virtual void Print();
	static int GetCount();
	static void SetCount(int _count);
};

