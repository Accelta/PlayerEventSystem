#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "imediator.h"
#include "mediator_soundsystem.h"
#include "mediator_ui.h"
#include "mediator_score.h"

class mediator : public imediator {
    mediator_soundsystem* sound;
    mediator_scoresystem* score;
    mediator_ui* interface;
public:
    mediator(mediator_soundsystem* s,  mediator_scoresystem* sc,  mediator_ui* u);
    void notifyAttack() override;
};

#endif