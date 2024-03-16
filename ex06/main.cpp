#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;
	if (argc != 2)
	{
		std::cerr << "Error: the invalid number of arguments" << std::endl;
		std::cerr << "[USAGE] ./harlFilter <DEBUG> or <INFO> or <WARNING> or <ERROR>" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
