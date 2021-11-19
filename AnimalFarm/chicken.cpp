//
//  chicken.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#include "chicken.hpp"

Chicken::Chicken(){}

Chicken::Chicken(string n,string t,int w, string f)
{
    setName(n);
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

void Chicken::setFeedingTime(string f)
{
    feedingTime = f;
}

string Chicken:: getFeedingTime()
{
    return feedingTime;
}

