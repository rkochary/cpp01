#include "Harl.hpp"

int main()
{
	Harl		harl;
	std::string	param;

	while (true)
	{
		std::cout << "Please insert 'DEBUG', 'INFO', 'WARNING', 'ERROR' or 'EXIT' -> ";
		 getline(std::cin, param);
		if (param.compare("EXIT") == 0 || std::cin.eof())
		    return 0;
		harl.complain(param);
	}
	
	return 0;
}