#include "player.h"
#include "enemy.h"
#include "ui.h"
#include "scoresystem.h"
#include "soundsystem.h"
#include <iostream>

int main(){
    player player1;
    enemy enemy1;
    soundsystem sound;
    ui UI;
    scoresystem score;

    player1.addObserver(&sound);
    player1.addObserver(&UI);
    player1.addObserver(&score);
    player1.attack();
    enemy1.takedamage();
    char input;
    std::cout << "Press 'A' to attack. Press 'Q' to quit.\n";

    while (true) {
        std::cout << "Input: ";
        std::cin >> input;

        if (input == 'A' || input == 'a') {
            player1.attack();
            enemy1.takedamage();
        } else if (input == 'Q' || input == 'q') {
            std::cout << "Exiting game.\n";
            break;
        } else {
            std::cout << "Invalid input. Try again.\n";
        }
    }

    return 0;
}