#include "Fwoosh.hpp"


Fwoosh::Fwoosh()
{
	this->_name = "Fwoosh";
	this->_effects = "fwooshed";
}

Fwoosh::~Fwoosh()
{
}

Fwoosh *Fwoosh::clone() const
{
	return (new Fwoosh);
}

Fwoosh::Fwoosh(const Fwoosh &src)
{
	*this = src;
}
Fwoosh& Fwoosh::operator=(const Fwoosh&src)
{
	if(this != &src)
		*this = src;
	return *this;
}
