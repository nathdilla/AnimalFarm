//
//  barn.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 11/3/21.
//

#include "barn.hpp"

Barn::Barn(){}

void Barn::feedAnimals(string feed)
{
    for (int i=0; i < animals.size();i++)
    {
        if (animals[i]->getFeedingTime() == feed)
        {
            animals.at(i)->eat();
            cout<<endl;
        }
    }
}

void Barn::addHorse(Horse horse)
{
    animals.push_back(&horse);
}

void Barn::addChicken(Chicken chicken)
{
    animals.push_back(&chicken);
}

void Barn::addCow(Cow cow)
{
    animals.push_back(&cow);
}
