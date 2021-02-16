/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:00:29 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 18:13:46 by ssnowbir         ###   ########.fr       */
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
	std::cout << _name<< ": This looks like another boring day."<< std::endl;
}

std::string Warlock::getName()const
{
	return (this->_name);
}
std::string Warlock::getTitle()const
{
	return(this->_title);
}
void Warlock::setTitle(std::string title)
{
	this->_title = title;
}
void Warlock::introduce() const
{
	std::cout<< _name<< ": I am "<< _name<< ", "<< _title<< "!"<<std::endl;
}


Warlock::~Warlock()
{
	std::cout <<_name<< ": My job here is done!"<< std::endl;
}

void Warlock::learnSpell(ASpell *src)
{
	std::vector<ASpell*>::iterator it = _list.begin();
	for(;it < _list.end(); it++)
	{
		if((*it)->getName() == src->getName())
			return ;
	}
	_list.push_back(src->clone());
}

void Warlock::forgetSpell(std::string str)
{
	std::vector<ASpell*>::iterator it = _list.begin();
	for(;it < _list.end(); it++)
	{
		if((*it)->getName() == str)
		{
			delete *it;
			it = _list.erase(it);
		}
	}
}

void Warlock::launchSpell(std::string name, const ATarget &src)
{
	std::vector<ASpell*>::iterator it = _list.begin();
	for(;it < _list.end(); it++)
	{
		if((*it)->getName() == name)
		{
			(*it)->launch(src);
			return ;
		}
	}
}