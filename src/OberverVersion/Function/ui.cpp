#include "ui.h"
#include <iostream>

void ui::display(const std::vector<std::string>& messages) {
    std::cout << "+---------------------------+\n";
    for (const auto& msg : messages) {
        std::cout << "| " << msg << "\n";
    }
    std::cout << "+---------------------------+\n";
}