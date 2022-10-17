#include "Grass.h"
#include <iostream>
using namespace std;
int Grass::count = 0;
Grass::Grass() :Living() {
	count++;
}
Grass::Grass(string _location) : Living(_location) {
	count++;
}
void Grass::Print()
{
	cout << "This is Grass" << endl;
}

int Grass::GetCount()
{
	return count;
}

void Grass::SetCount(int _count)
{
	count = _count;
}
