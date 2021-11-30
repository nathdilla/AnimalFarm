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
    addAnimal(a);
    a = new Horse("Horse1", 100);
    addAnimal(a);
    a = new Chicken("Chicken1", 1);
    addAnimal(a);
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
            if(animals.at(i)->getWeight()>=animals.at(i)->getTopWeight())
            {
                outToPasture(animals.at(i));
            }
        }
    }
}

void Barn::addAnimal(Animal * newAnimal)
{
    animals.push_back(newAnimal);
}

void Barn::outToPasture(Animal * a)
{
    for(int i=0;i<animals.size();i++)
    {
        if (animals.at(i)==a)
        {
            cout << animals.at(i)->getName() << " the " << animals.at(i)->getType() << " is output to pasture\n" << endl;
            animals.erase(animals.begin()+i);
            
            Animal *newAnimal;
            newAnimal = new Chicken("Chicken1", 1);
            addAnimal(newAnimal);
        }
    }
}
