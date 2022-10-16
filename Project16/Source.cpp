#include <iostream>
#include "Fox.h"
#include "Grass.h"
#include "Living.h"
#include "Rabbit.h"
using namespace std;
int main() {
	Living* foxes[3];
    for (int i = 0; i < 3; i++)
    {
        foxes[i] = new Fox(2,"woods");
    }
    Living* rabbits[10];
    for (int i = 0; i < 10; i++)
    {
        rabbits[i] = new Rabbit(5, "woods");
    }
    Living* grass[6];
    for (int i = 0; i < 6; i++)
    {
        grass[i] = new Grass("woods");
    }


}