//
//  cow.hpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#ifndef cow_hpp
#define cow_hpp

#include <stdio.h>
#include "animal.hpp"

class Cow : public Animal
{
public:
    Cow();
    Cow(string, int);
    //~Cow();
    void animalWeight();
    void eat();
    void setFeedingTime(string);
    void speak();
    int getTopWeight();
    string getFeedingTime();
private:
    string feedingTime = "3:00";
};

#endif /* cow_hpp */
