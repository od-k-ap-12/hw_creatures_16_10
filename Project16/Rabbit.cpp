#include "Rabbit.h"
#include "Living.h"
int Rabbit::count = 0;
Rabbit::Rabbit():Living()
{
	age = 5;
	agecap = 9;
	count++;
}
Rabbit::~Rabbit()
{
	count--;
}
Rabbit::Rabbit(int _age, string _location):Living(_location)
{
	age = _age;
	agecap = 9;
	count++;
}

void Rabbit::Print()
{
	cout << "Fox: " << age << " years, " << location << endl;
}

void Rabbit::SetCount(int _count)
{
	count = _count;
}

int Rabbit::GetAge()
{
	return age;
}

int Rabbit::GetAgeCap()
{
	return agecap;
}

int Rabbit::GetCount()
{
	return count;
}

