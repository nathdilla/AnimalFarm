//
//  chicken.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#include "chicken.hpp"

Chicken::Chicken(){}

Chicken::Chicken(string n,int w)
{
    setName(n);
    setWeight(w);
    setType("chicken");
}

void Chicken::animalWeight()
{
    cout << getName() + " is eating. " + getName() + " now weighs " + to_string(getWeight()) + " lbs." << endl;
}

void Chicken::eat()
{
    cout << "It is " + getFeedingTime() + ". " + getName() + " weight " + to_string(getWeight())  + " lbs" << endl;
    setWeight(getWeight()+1);
    animalWeight();
}

void Chicken::speak()
{
    cout << "cluck" << endl;
}

int Chicken::getTopWeight()
{
    return 12;
}

void Chicken::setFeedingTime(string f)
{
    feedingTime = f;
}

string Chicken:: getFeedingTime()
{
    return feedingTime;
}

