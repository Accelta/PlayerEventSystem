#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H
#include "Iobserver.h"

class scoresystem :public Iobserver
{

public: 
void PlayerAttack() override;

};

#endif // !SCORESYSTEM_H

