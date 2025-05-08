#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "Iobserver.h"

class player {
    std::vector<IObserver*> observers;
public:
    void addobserver(IObserver* observer);
    std::vector<std::string> attack();
};

#endif