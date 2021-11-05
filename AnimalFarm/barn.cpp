//
//  barn.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 11/3/21.
//

#include "barn.hpp"

Barn::Barn(){}

void Barn::feedCows(string feed)
{
    for (int i=0; i < pen.size();i++)
    {
        if (pen.at(i).getFeedingTime() == feed)
        {
            pen.at(i).eat();
            cout<<endl;
        }
    }
}

void Barn::feedHorses(string feed)
{
    for (int i=0; i < stall.size();i++)
    {
        if (stall.at(i).getFeedingTime() == feed)
        {
            stall.at(i).eat();
            cout<<endl;
        }
    }
}

void Barn::feedChickens(string feed)
{
    for (int i=0; i < coop.size();i++)
    {
        if (coop.at(i).getFeedingTime() == feed)
        {
            coop.at(i).eat();
            cout<<endl;
        }
    }
}

void Barn::addHorse(Horse horse)
{
    stall.push_back(horse);
}

void Barn::addChicken(Chicken chicken)
{
    coop.push_back(chicken);
}

void Barn::addCow(Cow cow)
{
    pen.push_back(cow);
}
