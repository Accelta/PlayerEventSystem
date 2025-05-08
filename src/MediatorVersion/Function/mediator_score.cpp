#include "mediator_score.h"

std::string mediator_scoresystem::updatescore() {
    score += 10;
    return "Score increased to " + std::to_string(score);
}