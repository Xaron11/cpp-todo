
#ifndef INTERACTION_H
#define INTERACTION_H

namespace todo {
class App;

class Interaction {
public:
    Interaction() = default;
    virtual void execute(App& app) = 0;
    virtual ~Interaction() = default;



};
}

#endif //INTERACTION_H
