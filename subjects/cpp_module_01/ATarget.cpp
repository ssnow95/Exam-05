/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:25:20 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:25:34 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell &src) const
{
	std::cout << this->_type<< " has been "<<src.getEffects()<<std::endl;
}

std::string ATarget::getType() const
{
	return (this->_type);
};

ATarget::ATarget()
{
}

ATarget::ATarget(std::string type)
{
	this->_type = type;
}

ATarget::~ATarget()
{
}