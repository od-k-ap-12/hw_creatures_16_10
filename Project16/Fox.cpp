#include "Fox.h"
int Fox::count = 0;
Fox::Fox():Living()
{
	if (count >= 5) {
		cout << "Can't create one anymore";
		age = 0;
		agecap = 0;
		delete this;
	}
	else {
		age = 2;
		agecap = 4;
		count++;
	}
}
Fox::Fox(int _age, string _location) :Living(_location)
	{
		if (count >= 5) {
			cout << "Can't create one anymore";
			age = 0;
			agecap = 0;
			delete this;
		}
		else {
			age = _age;
			agecap = 4;
			count++;
		}
	}

void Fox::Print()
{
	cout << "Fox: " << age << " years, " << location << endl;
}

int Fox::GetCount()
{
	return count;
}

void Fox::SetCount(int _count)
{
	count = _count;
}

int Fox::GetAge()
{
	return age;
}

int Fox::GetAgeCap()
{
	return agecap;
}
