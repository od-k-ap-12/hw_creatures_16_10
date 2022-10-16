#include "Grass.h"
#include <iostream>
using namespace std;
Grass::Grass(string _location):Living(_location){}
void Grass::Print()
{
	cout << "This is Grass" << endl;
}
