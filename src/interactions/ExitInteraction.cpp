

#include "ExitInteraction.h"

#include "../App.h"

namespace todo {
    void ExitInteraction::execute(App &app) {
        app.stop();
    }
} // todo