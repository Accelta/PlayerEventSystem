#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "Iobserver.h"
#include <string>

class scoresystem : public IObserver {
    int score = 0;
public:
    std::string onplayerattack() override;
};

#endif