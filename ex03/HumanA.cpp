#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string init_name, const Weapon& init_weapon)
	: name(init_name), weapon(init_weapon) {}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
