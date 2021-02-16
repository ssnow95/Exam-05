/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:24:39 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 11:51:48 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(const Warlock&src);
	Warlock&operator=(const Warlock &src);
public:
	Warlock(std::string name, std::string title);
	std::string getName() const;
	std::string getTitle() const;
	void		setTitle(std::string title);
	void introduce() const;
	~Warlock();
};

#endif

