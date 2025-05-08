#include "player.h"
#include <iostream>

void player::addObserver(Iobserver* observer) {
    observers.push_back(observer);
}

void player::attack(){
    std::cout << "Player Attacks the enemy" << std::endl;
    for (auto observer : observers)
    {
        observer->PlayerAttack();
    }
    
}