#include "Zombie.hpp"

int main()
{
  Zombie *z =  newZombie("Adash");
  z->announce();
  randomChump("raz");
  delete z;
}