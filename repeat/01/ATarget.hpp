/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:10:05 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 17:53:35 by ssnowbir         ###   ########.fr       */
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
	ATarget(const ATarget&src);
	ATarget& operator=(const ATarget&src);
	std::string getType() const;
	virtual ATarget *clone() const = 0;
	void getHitBySpell(const ASpell&src) const;
	~ATarget();
};

#endif