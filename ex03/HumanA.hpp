#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, const Weapon wepon);
		void	attack();
	private:
		std::string			name;
		const Weapon		weapon;
};

#endif
