//
//  barn.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 11/3/21.
//

#include "barn.hpp"

Barn::Barn()
{
    Animal *a;
    a = new Cow("Cow1", 100);
    animals.push_back(a);
    a = new Horse("Horse1", 100);
    animals.push_back(a);
    a = new Chicken("Chicken1", 100);
    animals.push_back(a);
}

void Barn::feedAnimals(string feed)
{
    for (int i=0; i < animals.size();i++)
    {
        if (animals[i]->getFeedingTime() == feed)
        {
            animals.at(i)->eat();
            animals.at(i)->speak();
            cout<<endl;
        }
    }
}

void Barn::addAnimal(Animal newAnimal)
{
    Animal *a;
//    a=newAnimal;
    animals.push_back(a);
}
