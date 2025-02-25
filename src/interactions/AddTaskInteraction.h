

#ifndef ADDTASKINTERACTION_H
#define ADDTASKINTERACTION_H
#include "../Interaction.h"

namespace todo {

class AddTaskInteraction final : public Interaction {
    void execute(App &app) override;
};

} // todo

#endif //ADDTASKINTERACTION_H
