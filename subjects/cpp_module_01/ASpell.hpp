/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:02:13 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:29:23 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
class ATarget;
#include "ATarget.hpp"


class ASpell
{
protected:
	std::string _name;
	std::string _effects;
public:
	ASpell();
	ASpell(std::string _name,std::string _effects);
	ASpell(const ASpell &src);
	ASpell& operator=(const ASpell &src);
	virtual ~ASpell();
	std::string getName() const;
	std::string getEffects() const;
	virtual ASpell *clone() const = 0;
	void lounch(const ATarget&src) const;
};


#endif