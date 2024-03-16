#include "Zombie.hpp"

#define SUCCESS 0

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
	Zombie* zombie;
	zombie = newZombie("zombie allocate!");
	zombie->announce();
	delete zombie;

	randomChump("zombie do not allocate!");
	return (SUCCESS);
}
