//
//  cow.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#include "cow.hpp"

Cow::Cow(){}

Cow::Cow(string n,int w)
{
    setName(n);
    setWeight(w);
    setType("cow");
}

void Cow::animalWeight()
{
    cout << getName() + " is eating. " + getName() + " now weighs " + to_string(getWeight()) + " lbs." << endl;
}

void Cow::eat()
{
    cout << "It is " + getFeedingTime() + ". " + getName() + " weight " + to_string(getWeight())  + " lbs" << endl;
    setWeight(getWeight()+5);
    animalWeight();
}

void Cow::speak()
{
    cout << "moo" << endl;
}

int Cow::getTopWeight()
{
    return 1500;
}

void Cow::setFeedingTime(string f)
{
    feedingTime = f;
}

string Cow::getFeedingTime()
{
    return feedingTime;
}

