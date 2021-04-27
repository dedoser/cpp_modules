/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:45:43 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 19:45:28 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(const std::string &type)
{
	this->type = type;
	this->xp = 0;
}

AMateria::~AMateria()
{
}

void				AMateria::setXP(unsigned int XP)
{
	this->xp = XP;
}

const std::string	&AMateria::getType() const
{
	return (this->type);
}

unsigned int		AMateria::getXP() const
{
	return (this->xp);
}

void				AMateria::use(ICharacter &target)
{
	this->xp += 10;
	target.getName();
}
