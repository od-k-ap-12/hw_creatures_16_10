#pragma once
#include "Living.h"
#include "Grass.h"
#include "Rabbit.h"
#include "Fox.h"
class Death
{
public:
	void fox_death(Fox* foxarr, int foxcount);
	void rabbit_death(Rabbit* rabbitarr, int rabbitcount);
	void if_someone_has_died(Rabbit* rabbitarr,int rabbitcount, Fox* foxarr,int foxcount, Grass* grassarr, int grasscount); 
};

