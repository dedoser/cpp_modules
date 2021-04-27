/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:28:23 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:45:28 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() :
	Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion &obj) :
	Enemy(obj)
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &right)
{
	Enemy::operator=(right);
	return (*this);
}

void		RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
