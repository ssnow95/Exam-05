/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:27:14 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 15:16:08 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy()
{
	this->_type = "Target Practice Dummy";
}

Dummy& Dummy::operator=(const Dummy& src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

Dummy::Dummy(const Dummy &src)
{
	this->_type = src.getType();
}

Dummy::~Dummy()
{
}

 Dummy *Dummy::clone()const
 {
	 return(new Dummy);
 }
