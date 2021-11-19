//
//  animal.hpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#ifndef animal_hpp
#define animal_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Animal
{
public:
    Animal();
    Animal(string, string, int);
    //~Animal();
    
    string getName();
    int getWeight();
    string getType();
    
    void setName(string);
    void setWeight(int);
    void setType(string);
    //void setFeedingTime(string);
    
    virtual void eat()=0;
    virtual string getFeedingTime()=0;
    //virtual void speak()=0;
private:
    string name;
    int weight;
    string type;
};

#endif /* animal_hpp */
