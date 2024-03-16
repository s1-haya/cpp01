#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\n" <<  "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[WARNING]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ERROR]:\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string type)
{
	size_t index = 4;
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*message[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (size_t i = 0; i < 4; i++) {
		if (complains[i] == type)
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case (0):
			(this->*message[0])();
		case (1):
			(this->*message[1])();
		case (2):
			(this->*message[2])();
		case (3):
			(this->*message[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << "[USAGE] ./harlFilter <DEBUG> or <INFO> or <WARNING> or <ERROR>" << std::endl;
			break;
	}
}
