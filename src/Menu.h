//
// Created by xaron on 2/24/25.
//

#ifndef MENU_H
#define MENU_H
#include <map>
#include <memory>

#include "Interaction.h"

namespace todo {

class Menu {
    std::map<int, std::unique_ptr<Interaction>> interactions;
public:
    void add_option(int index, std::unique_ptr<Interaction> interaction);
    Interaction& get_option(int index);
};

} // todo

#endif //MENU_H
