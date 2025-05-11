#include "mediator_enemy.h"
mediator_enemy::mediator_enemy(){
    health = 100;
}
std::string mediator_enemy::takedamage() {
    health -= 10;
    return "Enemy took 10 damage. Health: " + std::to_string(health);
}
