#include "Weapon.hpp"

Weapon::Weapon(std::string init_type) 
	: type(init_type){}

void	Weapon::setType(std::string type){
	this->type = type;
}

std::string	Weapon::getType() const {
	return (this->type);
}
