/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:46:58 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 16:31:12 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name<<": This looks like another boring day."<< std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->_name<< ": My job here is done!" <<std::endl;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am "<< this->_name <<", "<< this->_title<< " !" <<std::endl;
}

std::string Warlock::getName() const
{
	return (this->_name);
};
std::string Warlock::getTitle() const
{
	return (this->_title);
};
void		Warlock::setTitle(std::string title)
{
	this->_title = title;
};

void Warlock::learnSpell(ASpell* arr)
{
	std::vector<ASpell*>::iterator it = _list.begin();
	for(;it < _list.end(); it++)
	{
		if (arr->getName() == (*it)->getName())
				return ;
	}
	_list.push_back(arr->clone());
}

void Warlock::forgetSpell(std::string str)
{
	std::vector<ASpell*>::iterator it = _list.begin();
	for(;it < _list.end(); it++)
	{
		if (str == (*it)->getName())
		{
				delete *it;
				it = _list.erase(it);
		}
		else
			it++;
	}
}

void  Warlock::launchSpell(std::string spell, const ATarget &target)
{
	std::vector<ASpell*>::iterator it = _list.begin();
	for(; it < _list.end(); it++)
	{
		if((*it)->getName() == spell)
		{
			(*it)->lounch(target);
			return ;
		}
	}
}