#include "Zombie.hpp"

#define SUCCESS 0
#define FAILURE 1

void	randomChump(std::string name);
Zombie*	zombieHorde(int n, std::string name);
void	announceZombieHorde(Zombie* horde, int n);

int main(void) {
	Zombie* horde;
	horde = zombieHorde(10, "sawa");
	announceZombieHorde(horde, 10);
	delete [] horde;
	return (SUCCESS);
}
