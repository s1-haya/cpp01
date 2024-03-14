#include "Zombie.hpp"

#define SUCCESS 0
#define FAILURE 1

void	randomChump(std::string name);
Zombie*	zombieHorde(int n, std::string name);
void	announceZombieHorde(Zombie* horde, int n);
void	deleteZombieHorde(Zombie* horde, int n);

int main(void) {
	Zombie* horde;
	horde = zombieHorde(10, "sawa");
	announceZombieHorde(horde, 10);
	deleteZombieHorde(horde, 10);
	return (SUCCESS);
}
