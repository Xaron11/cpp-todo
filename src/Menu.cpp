
#include "Menu.h"

namespace todo {

    void Menu::add_option(const int index, std::unique_ptr<Interaction> interaction) {
        this->interactions[index] = std::move(interaction);
    }

    Interaction& Menu::get_option(const int index) {
        return *this->interactions[index];
    }



} // todo