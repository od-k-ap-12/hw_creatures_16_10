#include "Death.h"

void Death::fox_death(Fox* foxarr, int foxcount)
{
    int deathcount = 0;
    for (int i = 0; i < foxcount; i++)
    {
        if (foxarr[i].GetAge()>foxarr[i].GetAgeCap()) {
            foxarr[i].SetCount(foxarr[i].GetCount()-1);
            deathcount++;
       }
    }
    if (deathcount == 0) {
        cout << "All foxes are alive" << endl;
    }
    else {
        cout << deathcount << " foxes died." << endl;
    }
}

void Death::rabbit_death(Rabbit* rabbitarr, int rabbitcount)
{
    int deathcount = 0;
    for (int i = 0; i < rabbitcount; i++)
    {
        if (rabbitarr[i].GetAge() > rabbitarr[i].GetAgeCap()) {
            rabbitarr[i].SetCount(rabbitarr[i].GetCount() - 1);
            deathcount++;
        }
    }
    if (deathcount == 0) {
        cout << "All rabbits are alive" << endl;
    }
    else {
        cout << deathcount << " rabbits died." << endl;
    }
}

void Death::if_someone_has_died(Rabbit* rabbitarr, int rabbitcount, Fox* foxarr, int foxcount, Grass* grassarr, int grasscount)
{
    cout << "Rabbit count: " << rabbitarr[0].GetCount() << endl;
    cout << "Fox count: " << foxarr[0].GetCount() << endl;
    cout << "Grass count: " << grassarr[0].GetCount() << endl;
    fox_death(foxarr, foxcount);
    rabbit_death(rabbitarr, rabbitcount);
    if (rabbitarr[0].GetCount() > grassarr[0].GetCount()) {
        cout <<endl<< "Grass has been eaten by rabbits." << endl;
    }
    else {
        cout <<endl<< "Grass has not been eaten by rabbits" << endl;
    }
    if (rabbitarr[0].GetCount() > foxarr[0].GetCount()) {
        cout <<endl<< "Rabbits has not been eaten by foxes." << endl;
    }
    else {
        cout <<endl<< "Rabbits has been eaten by foxes" << endl;
    }
}
