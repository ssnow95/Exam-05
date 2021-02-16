/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:45:08 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:27:34 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include "ATarget.hpp"

class Fwoosh: public ASpell
{
private:

public:
	Fwoosh();
	Fwoosh(std::string name, std::string effects);
	Fwoosh(const Fwoosh &src);
	Fwoosh& operator=(const Fwoosh &src);
	virtual ~Fwoosh();
	virtual Fwoosh *clone()const;
};

#endif