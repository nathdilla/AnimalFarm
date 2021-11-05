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
    Animal(string, string, int, string);
    //~Animal();
    
    string getName();
    int getWeight();
    string getType();
    string getFeedingTime();
    
    void setName(string);
    void setWeight(int);
    void setType(string);
    void setFeedingTime(string);
private:
    string name;
    int weight;
    string type;
    string feedingTime;
};

#endif /* animal_hpp */
