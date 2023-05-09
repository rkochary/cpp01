#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
    std::cout << name << "is created" << std::endl;
}

Zombie::~Zombie()
{

}

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

void Zombie::announce()
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}