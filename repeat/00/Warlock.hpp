/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:56:50 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 16:01:21 by ssnowbir         ###   ########.fr       */
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
	Warlock &operator=(const Warlock &src);
	Warlock(const Warlock &src);
public:
	Warlock(std::string name, std::string title);
	std::string getName()const;
	std::string getTitle()const;
	void setTitle(std::string title);
	void introduce() const;
	~Warlock();
};




#endif