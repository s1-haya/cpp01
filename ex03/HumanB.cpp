#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	this->name = name;
}

void	HumanB::setWeapon(Weapon weapon){
	this->weapon = weapon;
}

const Weapon	HumanB::getWeapon() const {
	return (this->weapon);
}

void	HumanB::attack() {
	std::cout << this->name << "attacks with their" << this->weapon.type << std::endl;
}
