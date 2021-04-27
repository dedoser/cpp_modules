/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 02:33:45 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:45:28 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj)
{
	*this = obj;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<  "I'll be back...\n";
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &right)
{
	this->name = right.name;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attacks with chainfists *\n";
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}
