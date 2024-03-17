#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void	announce(void) const ;
		void	set_zombie_name(const std::string name);
		const	std::string get_zombie_name() const;
};

#endif
