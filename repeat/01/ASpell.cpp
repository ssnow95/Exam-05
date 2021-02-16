#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::~ASpell()
{
}

ASpell::ASpell(std::string name, std::string effects)
{
	this->_name = name;
	this->_effects = effects;
}
std::string ASpell::getName() const
{
	return (this->_name);
}
std::string ASpell::getEffects() const
{
	return (this->_effects);
}

ASpell::ASpell(const ASpell&src)
{
	this->_name = src._name;
	this->_effects = src._effects;
}

ASpell& ASpell::operator=(const ASpell&src)
{
	this->_name = src._name;
	this->_effects = src._effects;
	return (*this);
}

void ASpell::launch(const ATarget &src) const
{
	src.getHitBySpell(*this);
}