//
//  barn.hpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 11/3/21.
//

#ifndef barn_hpp
#define barn_hpp

#include <iostream>
#include <string>
#include "horse.hpp"
#include "cow.hpp"
#include "chicken.hpp"
#include <vector>
using namespace std;

class Barn
{
public:
    Barn();
    //~Barn();
    void feedAnimals(string);
    void addAnimal(Animal);
private:
    vector <Animal *> animals;
};
#endif /* barn_hpp */
