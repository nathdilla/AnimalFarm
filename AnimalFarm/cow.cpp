//
//  cow.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#include "cow.hpp"

Cow::Cow(){}

Cow::Cow(string n,string t,int w, string f):Animal(n,t,w,f){}

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
