#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
}

Zombie::~Zombie() {
}

void	Zombie::announce(void) const {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_zombie_name(const std::string name) {
	this->name = name;
}

const	std::string	Zombie::get_zombie_name() const {
	return (this->name);
}
