//
//  chicken.hpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#ifndef chicken_hpp
#define chicken_hpp

#include <stdio.h>
#include "animal.hpp"

class Chicken : public Animal
{
public:
    Chicken();
    Chicken(string, string, int, string);
    //~Chicken();
    void animalWeight();
    void eat();
    void setFeedingTime(string);
    string getFeedingTime();
private:
    string feedingTime = "3:00";
};

#endif /* chicken_hpp */
