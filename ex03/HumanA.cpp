#include "HumanA.hpp"
#include <iostream>


HumanA::HumanA(const std::string name, const Weapon *weapon) {
	this->name = name;
	this->weapon = weapon;
}

void	HumanA::attack() {
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}
