#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;
	if (argc != 2)
		std::cerr << "Error: the invalid number of arguments" << std::endl;
	else
		harl.complain(argv[1]);
	return (0);
}
