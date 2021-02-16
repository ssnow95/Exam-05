/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:16:40 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:25:19 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>
class ASpell;
#include "ASpell.hpp"


class ATarget
{
protected:
	std::string _type;
public:
	ATarget();
	ATarget(std::string type);
	virtual ~ATarget();
	std::string getType() const;
	virtual ATarget * clone() const = 0;
	void getHitBySpell(const ASpell&) const;
};




#endif