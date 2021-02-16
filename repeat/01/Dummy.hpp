#ifndef DUMMY_HPP
#define DUMMY_HPP
#include "ATarget.hpp"

class Dummy: public ATarget
{
	private:
	public:
		Dummy();
		Dummy(std::string name, std::string effects);
		Dummy(const Dummy&src);
		Dummy&operator=(const Dummy&src);
		~Dummy();
		Dummy *clone() const;
};


#endif