/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:37:53 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:27:12 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
#define DUMMY_HPP
#include "ATarget.hpp"

class Dummy: public ATarget
{
private:

public:
	Dummy();
	Dummy(const Dummy &src);
	Dummy& operator=(const Dummy &src);
	virtual ~Dummy();
	virtual Dummy *clone()const;
};

#endif
