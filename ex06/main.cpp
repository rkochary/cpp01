#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl		harl;
   
   	if(ac != 2)
    {
       std::cout << "Error: wrong arguments" <<std::endl;
        return 1;
    }
    else
    {
        harl.complain(harl,av[1]);
	    return 0;

    }
	
}
