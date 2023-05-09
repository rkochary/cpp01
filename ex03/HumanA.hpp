#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string n, Weapon& t);
       // ~HumanA();
        void attack();
    private:
        std::string name;
        Weapon* weapon;
};



#endif