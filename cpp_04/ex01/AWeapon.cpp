/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:50:49 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/23 20:14:35 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &obj)
{
	*this = obj;
}

AWeapon	&AWeapon::operator=(const AWeapon &right)
{
	this->name = right.name;
	this->apcost = right.apcost;
	this->damage = right.damage;
	return (*this);
}

AWeapon::~AWeapon()
{
}

int		AWeapon::getAPCost() const
{
	return (this->apcost);
}

int		AWeapon::getDamage() const
{
	return (this->damage);
}

const std::string	&AWeapon::getName() const
{
	return (this->name);
}
