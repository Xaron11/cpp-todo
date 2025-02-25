#ifndef APP_H
#define APP_H
#include <vector>

#include "Menu.h"
#include "Task.h"

namespace todo {

class App {
    std::vector<Task> tasks;
    Menu menu;
    bool is_running = false;
    public:
    App();

    void run();
    void display_tasks() const;

    static void display_menu_main();
    void interact();
    void add_task(const std::string& name);
    void remove_task(int id);
    Task& get_task(const int id) {
        return this->tasks[id-1];
    }
    void stop() {
        this->is_running = false;
    }

};

} // todo


#endif //APP_H
