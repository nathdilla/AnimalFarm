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
    void feedHorses(string);
    void feedChickens(string);
    void feedCows(string);
    void addHorse(Horse);
    void addChicken(Chicken);
    void addCow(Cow);
private:
    vector <Chicken> coop;
    vector <Cow> pen;
    vector <Horse> stall;
};

#endif /* barn_hpp */