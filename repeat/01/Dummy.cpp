#include "Dummy.hpp"

Dummy::Dummy()
{
	this->_type = "Target Practice Dummy";
}

Dummy::~Dummy()
{
}

Dummy *Dummy::clone() const
{
	return (new Dummy);
}

Dummy::Dummy(const Dummy &src)
{
	*this = src;
}
Dummy& Dummy::operator=(const Dummy&src)
{
	if(this != &src)
		*this = src;
	return *this;
}
