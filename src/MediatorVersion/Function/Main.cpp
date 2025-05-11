#include "mediator_player.h"
#include "mediator.h"
#include "mediator_score.h"
#include "mediator_soundsystem.h"
#include "mediator_ui.h"
#include "mediator_enemy.h"
#include <iostream>

int main() {
    mediator_soundsystem sound;
    mediator_scoresystem score;
    mediator_ui interface;
    mediator_enemy enemy;

    mediator med(&sound, &score, &interface, &enemy);
    mediator_player p(&med);

    std::cout << "Press 'A' to attack. Press 'Q' to quit.\n";

    char input;
    while (true) {
        std::cout << "Input: ";
        std::cin >> input;

        if (input == 'A' || input == 'a') {
            p.attack();
        } else if (input == 'Q' || input == 'q') {
            std::cout << "Exiting game.\n";
            break;
        } else {
            std::cout << "Invalid input.\n";
        }
    }

    return 0;
}
