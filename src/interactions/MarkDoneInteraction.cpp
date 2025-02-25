
#include "MarkDoneInteraction.h"
#include "../App.h"

#include <iostream>

namespace todo {
    void MarkDoneInteraction::execute(App &app) {
        std::cout << "Enter task ID to mark as done: ";
        int id;
        std::cin >> id;
        app.get_task(id).mark_done();
        app.display_tasks();
    }

} // todo