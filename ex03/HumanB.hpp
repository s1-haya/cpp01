#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		Weapon*	getWeapon() const;
		void			setWeapon(Weapon* weapon);
		void			attack();
	private:
		std::string	name;
		Weapon*		weapon;
};

#endif
