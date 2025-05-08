#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H
#include "Iobserver.h"
class soundsystem :public Iobserver
{
public:
 void PlayerAttack() override;
};


#endif // !SOUNDSYSTEM_H
