/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:18:13 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/23 21:49:59 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() :
	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj) :
	AWeapon(obj)
{
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &right)
{
	AWeapon::operator=(right);
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
