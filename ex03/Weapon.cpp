#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    type = str;   
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string str)
{
    type = str;
}

std::string Weapon::getType()
{
    return type;
}