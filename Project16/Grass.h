#pragma once
#include "Living.h"
class Grass:public Living
{
public:
	Grass(string _location);
	virtual void Print();
};

