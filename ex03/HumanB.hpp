#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string n);
        ~HumanB();
        void attack();
        void setWeapon(Weapon&);
    private:
        std::string name;
        Weapon* weapon;
};


//fff
#endif