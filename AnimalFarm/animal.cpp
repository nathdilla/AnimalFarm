//
//  animal.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#include "animal.hpp"

Animal::Animal(){};

Animal::Animal(string n,string t,int w)
{
    name = n;
    type = t;
    weight = w;
}

string Animal::getName()
{
    return name;
}

string Animal::getType()
{
    return type;
}

int Animal::getWeight()
{
    return weight;
}

void Animal::setName(string s)
{
    name = s;
}

void Animal::setType(string t)
{
    type = t;
}

void Animal::setWeight(int w)
{
    weight = w;
}
