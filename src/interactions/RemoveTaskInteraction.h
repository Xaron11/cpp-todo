
#ifndef REMOVETASKINTERACTION_H
#define REMOVETASKINTERACTION_H
#include "../Interaction.h"


namespace todo {

class RemoveTaskInteraction final : public Interaction {
    void execute(App &app) override;
};

}


#endif //REMOVETASKINTERACTION_H
