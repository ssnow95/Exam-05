/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:24:39 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:15:36 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
class ASpell;
#include "ASpell.hpp"
#include <vector>
#include <iterator> 

class Warlock
{
private:
	std::string _name;
	std::string _title;
	std::vector<ASpell*> _list;
	Warlock();
	Warlock(const Warlock&src);
	Warlock&operator=(const Warlock &src);
public:
	Warlock(std::string name, std::string title);
	std::string getName() const;
	std::string getTitle() const;
	void		setTitle(std::string title);
	void introduce() const;
	void learnSpell(ASpell* arr);
	void forgetSpell(std::string arr);
	void launchSpell(std::string spell, const ATarget &target);
	
	~Warlock();
};

#endif

