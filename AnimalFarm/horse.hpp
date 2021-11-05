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
    Horse(string, string, int, string);
    //~Horse();
    void animalWeight();
    void eat();
private:
};

#endif /* horse_hpp */
