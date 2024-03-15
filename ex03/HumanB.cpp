#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string init_name)
	: name(init_name), weapon(NULL) {}

void	HumanB::setWeapon(Weapon* weapon){
	this->weapon = weapon;
}

Weapon*	HumanB::getWeapon() const {
	return (this->weapon);
}

void	HumanB::attack() {
	std::cout << this->name << " attacks with their " << getWeapon()->getType() << std::endl;
}
