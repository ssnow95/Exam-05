#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::~ATarget()
{
}

ATarget::ATarget(std::string type)
{
	this->_type = type;
}
ATarget::ATarget(const ATarget&src)
{
	this->_type = src._type;
}
ATarget& ATarget::operator=(const ATarget&src)
{
	this->_type = src._type;
	return *this;
}
std::string ATarget::getType() const
{
	return (this->_type);
}

void ATarget::getHitBySpell(const ASpell&src) const
{
	std::cout << _type<< " has been "<< src.getEffects()<< "!"<<std::endl;
}