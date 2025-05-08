#include "mediator_ui.h"
#include <iostream>

void mediator_ui::display(const std::vector<std::string>& messages) {
    std::cout << "+---------------------------+\n";
    for (const auto& msg : messages) {
        std::cout << "| " << msg << "\n";
    }
    std::cout << "+---------------------------+\n";
}