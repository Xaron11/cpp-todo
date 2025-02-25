
#ifndef MARKDONEINTERACTION_H
#define MARKDONEINTERACTION_H
#include "../Interaction.h"

namespace todo {

class MarkDoneInteraction final : public Interaction {
    void execute(App &app) override;
};

} // todo

#endif //MARKDONEINTERACTION_H
