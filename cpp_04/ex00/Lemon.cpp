/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lemon.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 00:33:34 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:41:34 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lemon.hpp"
#include <iostream>

Lemon::Lemon(const std::string &name) :
	Victim(name)
{
	std::cout << "SQUIIIISH\n";
}

Lemon::Lemon(const Lemon &obj) :
	Victim(obj)
{
}

Lemon::~Lemon()
{
}

Lemon		&Lemon::operator=(const Lemon &right)
{
	this->Victim::operator=(right);
	return (*this);
}

void		Lemon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a strawberry!\n";
}
