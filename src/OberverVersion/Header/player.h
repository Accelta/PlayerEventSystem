#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Iobserver.h"

class player
{
std::vector<Iobserver*> observers;
public:
void addObserver(Iobserver* observer);
void attack();
};


#endif // !PLAYER_H
