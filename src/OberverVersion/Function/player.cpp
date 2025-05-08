#include "player.h"

void player::addobserver(IObserver* observer) {
    observers.push_back(observer);
}

std::vector<std::string> player::attack() {
    std::vector<std::string> messages;
    messages.push_back("Player attacked!");

    for (auto& observer : observers) {
        messages.push_back(observer->onplayerattack());
    }

    return messages;
}