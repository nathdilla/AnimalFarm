//
//  horse.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#include "horse.hpp"

Horse::Horse(){}

Horse::Horse(string n,string t,int w, string f):Animal(n,t,w,f){}

void Horse::animalWeight()
{
    cout << getName() + " is eating. " + getName() + " now weighs " + to_string(getWeight()) + " lbs." << endl;
}

void Horse::eat()
{
    cout << "It is " + getFeedingTime() + ". " + getName() + " weight " + to_string(getWeight())  + " lbs" << endl;
    setWeight(getWeight()+5);
    animalWeight();
}
