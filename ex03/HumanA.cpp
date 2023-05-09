#include "HumanA.hpp"

HumanA::HumanA(std::string str,Weapon& type)
{
    name = str;
    weapon = &type;
}

void HumanA::attack()
{
   std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}