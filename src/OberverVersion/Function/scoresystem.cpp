#include "scoresystem.h"

std::string scoresystem::onplayerattack() {
    score += 10;
    return "Score increased to " + std::to_string(score);
}