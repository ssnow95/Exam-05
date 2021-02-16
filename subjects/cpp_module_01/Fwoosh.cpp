/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:27:36 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 15:16:43 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	this->_name = "Fwoosh";
	this->_effects = "fwooshed";
}

Fwoosh& Fwoosh::operator=(const Fwoosh &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

Fwoosh::Fwoosh(const Fwoosh &src)
{
	this->_name = src._name;
	this->_effects = src._effects;
}

Fwoosh::~Fwoosh()
{
}

 Fwoosh *Fwoosh::clone()const
 {
	 return(new Fwoosh);
 }
