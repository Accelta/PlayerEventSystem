// soundsystem.h
#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

#include "Iobserver.h"
#include <string>

class soundsystem : public IObserver {
public:
    std::string onplayerattack() override;
};
#endif