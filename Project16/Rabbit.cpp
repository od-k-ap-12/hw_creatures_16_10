#include "Rabbit.h"
#include "Living.h"
Rabbit::Rabbit(int _age, string _location):Living(_location)
{
	age = _age;
	agecap = 9;
}

void Rabbit::Print()
{
	cout << "Fox: " << age << " years, " << location << endl;
}

