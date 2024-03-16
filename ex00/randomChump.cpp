#include "Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name) {
	Zombie zombie;
	zombie.set_zombie_name(name);
	zombie.announce();
}
