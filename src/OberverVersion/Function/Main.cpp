#include "player.h"
#include "enemy.h"
#include "soundsystem.h"
#include "scoresystem.h"
#include "ui.h"

#include <iostream>

int main() {
    player p;
    soundsystem sound;
    scoresystem score;
    ui interface;

    p.addobserver(&sound);
    p.addobserver(&score);

    char input;
    std::cout << "Press 'A' to attack. Press 'Q' to quit.\n";

    while (true) {
        std::cout << "Input: ";
        std::cin >> input;

        if (input == 'A' || input == 'a') {
            std::vector<std::string> messages = p.attack();
            interface.display(messages);
        } else if (input == 'Q' || input == 'q') {
            std::cout << "Exiting game.\n";
            break;
        } else {
            std::cout << "Invalid input.\n";
        }
    }

    return 0;
}
