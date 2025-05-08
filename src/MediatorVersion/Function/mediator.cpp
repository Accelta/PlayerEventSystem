#include "mediator.h"
#include <vector>

mediator::mediator(mediator_soundsystem* s, mediator_scoresystem* sc, mediator_ui* u)
    : sound(s), score(sc), interface(u) {}

void mediator::notifyAttack() {
    std::vector<std::string> messages;
    messages.push_back(sound->playsound());
    messages.push_back(score->updatescore());
    interface->display(messages);
}