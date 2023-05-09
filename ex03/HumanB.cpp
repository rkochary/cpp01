#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
}

void HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

void HumanB::attack()
{
   std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}