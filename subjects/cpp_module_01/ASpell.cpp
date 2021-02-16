/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:03:03 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:29:16 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(std::string name, std::string effects)
{
	this->_name = name;
	this->_effects = effects;
}

ASpell::~ASpell()
{
}

ASpell::ASpell(const ASpell &src)
{
	this->_name = src._name;
	this->_effects = src._effects;
}

ASpell & ASpell::operator=(const ASpell &src)
{
	this->_name = src._name;
	this->_effects = src._effects;
	return *this;
}

std::string ASpell::getName() const
{
	return (this->_name);
};
std::string ASpell::getEffects() const
{
	return (this->_effects);
};

void ASpell::lounch(const ATarget&src) const
{
	src.getHitBySpell(*this);
}