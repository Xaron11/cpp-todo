

#include "AddTaskInteraction.h"

#include <iostream>

#include "../App.h"

namespace todo {
    void AddTaskInteraction::execute(App &app) {
        std::cout << "Enter task name: ";
        std::string name;
        std::cin.ignore();
        std::getline(std::cin, name);
        app.add_task(name);
        app.display_tasks();
    }
} // todo