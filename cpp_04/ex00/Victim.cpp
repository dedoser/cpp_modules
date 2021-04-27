/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:37:11 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:45:28 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim() :
	name("")
{
	std::cout << "Some random victim without name just appeared!\n";
}

Victim::Victim(const std::string &name) :
	name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!\n";
}

Victim::Victim(const Victim &obj)
{
	*this = obj;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!\n";
}

const std::string	&Victim::getName() const
{
	return (this->name);
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!\n";
}

Victim	&Victim::operator=(const Victim &right)
{
	this->name = right.name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Victim &vic)
{
	out << "I'm " << vic.getName() << " and I like otters!\n";
	return (out);
}
