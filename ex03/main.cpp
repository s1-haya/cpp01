#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

void test_humanA()
{
	Weapon club = Weapon("crude spiked club");
	//if this case is, explicit specifier need.
	//- copy initialization (implicit type conversion)
	// std::string string_crub = "go go go!";
	// Weapon club = string_crub;
	// this type is the const char when declare and initialize at the same time.
	// Weapon club = "go go go!";
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void test_humanB()
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	if (jim.getWeapon() == NULL)
		std::cout << "club's weapon don't set." << std::endl;
	jim.setWeapon(&club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int main(void)
{
	test_humanA();
	test_humanB();
	return (0);
}
