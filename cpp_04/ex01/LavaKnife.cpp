/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LavaKnife.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:45:21 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:56:48 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LavaKnife.hpp"
#include <iostream>

LavaKnife::LavaKnife() :
	AWeapon("Lava knife", 2, 7)
{
}

LavaKnife::LavaKnife(const LavaKnife &obj) :
	AWeapon(obj)
{
}

LavaKnife::~LavaKnife()
{
}

LavaKnife	&LavaKnife::operator=(const LavaKnife &right)
{
	AWeapon::operator=(right);
	return (*this);
}

void	LavaKnife::attack() const
{
	std::cout << "* pih pih pih *\n";
}
