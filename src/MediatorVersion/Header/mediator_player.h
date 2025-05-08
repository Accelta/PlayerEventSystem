#ifndef PLAYER_H
#define PLAYER_H

#include "imediator.h"

class mediator_player {
    imediator* mediator;
public:
    mediator_player(imediator* m);
    void attack();
};

#endif