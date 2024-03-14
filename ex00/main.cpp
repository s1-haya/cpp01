#include "Zombie.hpp"

#define SUCCESS 0
#define FAILURE 1

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main(void) {
	Zombie* zombie;
	zombie = newZombie("zombie");
	zombie->announce();
	delete zombie;
	return (SUCCESS);
}
