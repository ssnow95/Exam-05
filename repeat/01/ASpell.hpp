/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:09:23 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 17:51:35 by ssnowbir         ###   ########.fr       */
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
	virtual ~ASpell();
	ASpell(std::string name, std::string effects);
	ASpell(const ASpell&src);
	ASpell& operator=(const ASpell&src);
	
	std::string getName() const;
	std::string getEffects() const;
	virtual ASpell *clone() const = 0;
	void launch(const ATarget &src) const;
};




#endif