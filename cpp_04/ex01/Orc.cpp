/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Orc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:53:19 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:59:04 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Orc.hpp"

Orc::Orc() :
	Enemy(20, "Orc")
{
}

Orc::Orc(const Orc &obj) :
	Enemy(obj)
{
}

Orc::~Orc()
{
}

Orc	&Orc::operator=(const Orc &right)
{
	Enemy::operator=(right);
	return (*this);
}

void	Orc::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 1);
}
