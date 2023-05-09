#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // Weapon a = Weapon("sword");
    // Weapon b = Weapon("chaquch");
    // HumanA hum = HumanA("Raz",a);
    // HumanB humb = HumanB("Tik");
    // humb.setWeapon(b);

    // humb.attack();
    // hum.attack();


    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    
//     Weapon club = Weapon("crude spiked club");
//     HumanB jim("Jim");
//     jim.setWeapon(club);
//     jim.attack();
//     club.setType("some other type of club");
//     jim.attack();
}