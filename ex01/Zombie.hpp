#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void setName(std::string);
    private:
        std::string name;
        
};

Zombie* zombieHorde(int , std::string);

#endif