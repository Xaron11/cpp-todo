
#ifndef TASK_H
#define TASK_H
#include <string>

namespace todo {

class Task {
    int task_id;
    std::string name;
    bool is_done = false;

public:
    Task(int task_id, std::string name);

    void mark_done();

    void display_task() const;
};

} // todo

#endif //TASK_H
