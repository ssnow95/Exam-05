#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell
{
	private:
	public:
		Fwoosh();
		Fwoosh(std::string name, std::string effects);
		Fwoosh(const Fwoosh&src);
		Fwoosh&operator=(const Fwoosh&src);
		~Fwoosh();
		Fwoosh *clone() const;
};

#endif