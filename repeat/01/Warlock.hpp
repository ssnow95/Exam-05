/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:56:50 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 18:09:57 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
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
	Warlock &operator=(const Warlock &src);
	Warlock(const Warlock &src);
public:
	Warlock(std::string name, std::string title);
	std::string getName()const;
	std::string getTitle()const;
	void setTitle(std::string title);
	void introduce() const;

	void learnSpell(ASpell *src);
	void forgetSpell(std::string str);
	void launchSpell(std::string name, const ATarget &src);
	
	~Warlock();
};




#endif