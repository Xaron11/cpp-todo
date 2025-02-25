//
// Created by xaron on 2/25/25.
//

#include "RemoveTaskInteraction.h"

#include <iostream>

#include "../App.h"

namespace todo {
    void RemoveTaskInteraction::execute(App &app) {
        std::cout << "Enter task ID to remove: ";
        int id;
        std::cin >> id;
        app.remove_task(id);
        app.display_tasks();
    }

}
