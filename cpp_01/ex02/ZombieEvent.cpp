/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:39:09 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 00:48:56 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie	*ZombieEvent::randomChump()
{
	std::string	name(10, '\0');

	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
		name[i] = rand() % 26 + 'a';
	return (this->newZombie(name));
}

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}
