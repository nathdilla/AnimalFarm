//
//  main.cpp
//  AnimalFarm
//
//  Created by Nathan Dilla on 10/29/21.
//

#include <iostream>
#include "barn.hpp"

int main(int argc, const char * argv[]) {
    Barn b;
    string feed;
//    b.addAnimal(new Cow("Mr. Moo", 415));
//    b.addHorse(Horse("Frank the Horse", "Horse", 505, "2:00"));
//    b.addChicken(Chicken("McNugget", "Chicken", 35, "12:00"));
    
    for (int day=0;day<500;day++)
    {
        for (int hour=0;hour<=12;hour++)
        {
            feed =to_string(hour)+":00";
            b.feedAnimals(feed);
        }
    }
    return 0;
}
