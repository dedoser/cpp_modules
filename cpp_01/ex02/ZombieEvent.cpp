/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:39:09 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/30 14:34:06 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	if (type.length() == 0)
		this->type = "no type";
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie		*res;
	std::string	name(10, '\0');

	for (int i = 0; i < 10; ++i)
		name[i] = rand() % 26 + 'a';
	res = this->newZombie(name);
	res->announce();
	return (res);
}

ZombieEvent::ZombieEvent(void)
{
	this->type = "no type";
	srand(time(NULL));
}

ZombieEvent::~ZombieEvent(void)
{
}
