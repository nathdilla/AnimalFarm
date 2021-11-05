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
    Cow(string, string, int, string);
    //~Cow();
    void animalWeight();
    void eat();
private:
};

#endif /* cow_hpp */
