/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:46:13 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:41:07 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

Peon::Peon(const std::string &name) :
	Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &obj) :
	Victim(obj)
{
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon	&Peon::operator=(const Peon &right)
{
	this->Victim::operator=(right);
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << Victim::getName() << " has been turned into a pink pony!\n";
}
