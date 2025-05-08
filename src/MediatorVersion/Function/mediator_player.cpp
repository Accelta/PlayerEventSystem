#include "mediator_player.h"
#include <iostream>

mediator_player:: mediator_player(imediator* m) : mediator(m) {}

void  mediator_player::attack() {
    std::cout << "Player attacks enemy!" << std::endl;
    mediator->notifyAttack();
}