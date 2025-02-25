#include "App.h"
#include <iostream>
#include <memory>

#include "interactions/AddTaskInteraction.h"
#include "interactions/ExitInteraction.h"
#include "interactions/MarkDoneInteraction.h"
#include "interactions/RemoveTaskInteraction.h"

namespace todo {

App::App() {
    this->menu.add_option(1, std::make_unique<AddTaskInteraction>());
    this->menu.add_option(2, std::make_unique<MarkDoneInteraction>());
    this->menu.add_option(3, std::make_unique<RemoveTaskInteraction>());
    this->menu.add_option(4, std::make_unique<ExitInteraction>());
}

void App::run() {
    this->is_running = true;
    this->display_tasks();
    while (is_running) {
        display_menu_main();
        this->interact();
    }
}

void App::interact() {
    int choice;
    std::cin >> choice;
    this->menu.get_option(choice).execute(*this);

}

void App::add_task(const std::string& name) {
    const Task task(this->tasks.size()+1, name);
    this->tasks.push_back(task);
}

void App::remove_task(const int id) {
    this->tasks.erase(this->tasks.begin() + id - 1);
}


void App::display_tasks() const {
    std::cout << "TO-DO:\n";
    if (tasks.empty()) {
        std::cout << "No tasks.\n\n";
        return;
    }
    for (auto& task: this->tasks) {
        task.display_task();
    }
    std::cout << "\n";
}

void App::display_menu_main() {
    std::cout << "Choose an option:\n\n";
    std::cout << "1. Add task\n";
    std::cout << "2. Mark as done\n";
    std::cout << "3. Remove task\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}


} // todo