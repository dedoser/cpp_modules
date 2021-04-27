/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:31:28 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 19:53:44 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() :
	AMateria("cure")
{
}

Cure::Cure(const Cure &obj) :
	AMateria("cure")
{
	this->setXP(obj.getXP());
}

Cure::~Cure()
{
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *\n";
	this->AMateria::use(target);
}
