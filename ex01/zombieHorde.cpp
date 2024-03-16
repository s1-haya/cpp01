#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name) {
	Zombie* horde = new Zombie[n]();
	for (int i = 0; i < n; i++) {
		horde[i].set_zombie_name(name);
	}
	return (horde);
}

void	announceZombieHorde(Zombie* horde, int n) {
	for (int i = 0; i < n; i++) {
		horde[i].announce();
	}
}
