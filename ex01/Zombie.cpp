#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
     
}

void Zombie::announce()
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string str)
{
    name = str;
}

Zombie* zombieHorde(int N,std::string name)
{
    Zombie* a = new Zombie[N];
    for(int i = 0;i < N;i++)
    {
        a[i].setName(name);
    }
    return a;
}
