
#ifndef EXITINTERACTION_H
#define EXITINTERACTION_H
#include "../Interaction.h"

namespace todo {

class ExitInteraction final : public Interaction {
    void execute(App &app) override;
};

} // todo

#endif //EXITINTERACTION_H
