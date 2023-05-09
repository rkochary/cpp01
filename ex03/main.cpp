#include "Weapon.hpp"

int main()
{
    Weapon a = Weapon("sword");
    std::cout << a.getType() << std::endl;
    a.setType("luk");
    std::cout << a.getType() << std::endl;
}