#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon();
		explicit Weapon(std::string type);
		const std::string	&getType() const;
		void				setType(std::string type);
	private:
		std::string			type;
};

#endif
