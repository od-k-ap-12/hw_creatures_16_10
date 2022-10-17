#pragma once
#include <string>
#include <iostream>
using namespace std;
class Living
{
protected:
	string location;
public:
	Living();
	Living(string _location);
	virtual void Print() = 0;
};

