/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 02:24:30 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:45:28 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj)
{
	*this = obj;
}

TacticalMarine::~TacticalMarine()
{
	std::cout <<  "Aaargh...\n";
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &right)
{
	this->name = right.name;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone() const
{
	return (new TacticalMarine);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}
