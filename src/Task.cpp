//
// Created by xaron on 2/24/25.
//

#include "Task.h"

#include <iostream>
#include <utility>

namespace todo {
    Task::Task(const int task_id, std::string  name) : task_id(task_id), name(std::move(name)) {

    }

    void Task::mark_done() {
        this->is_done = true;
    }

    void Task::display_task() const {
        std::cout << "- [";
        this->is_done ? std::cout << "x" : std::cout << " ";
        std::cout << "] " << this->name << " (" << this->task_id << ")\n";
    }



} // todo