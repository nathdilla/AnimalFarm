//
//  horse.hpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#ifndef horse_hpp
#define horse_hpp

#include <stdio.h>
#include "animal.hpp"

class Horse : public Animal
{
public:
    Horse();
    Horse(string, int);
    //~Horse();
    void animalWeight();
    void eat();
    void setFeedingTime(string);
    void speak();
    int getTopWeight();
    string getFeedingTime();
private:
    string feedingTime = "3:00";
};

#endif /* horse_hpp */
