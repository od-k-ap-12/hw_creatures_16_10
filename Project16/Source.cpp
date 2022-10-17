#include <iostream>
#include "Fox.h"
#include "Grass.h"
#include "Living.h"
#include "Rabbit.h"
#include "Death.h"
using namespace std;
int main() {
    const int foxcount=3;
    const int rabbitcount=10;
    const int grasscount=6;
	Fox* foxes=new Fox[foxcount];
    Rabbit* rabbits = new Rabbit[rabbitcount];
    Grass* grass = new Grass[grasscount];
    Death* death=new Death;
    death->if_someone_has_died(rabbits,rabbitcount,foxes,foxcount,grass,grasscount);
   delete[] foxes;
    delete[] rabbits;
    delete[] grass;
    delete death;
}