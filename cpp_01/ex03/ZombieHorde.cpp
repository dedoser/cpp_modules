/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:41:24 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 20:09:23 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string		nameRandom()
{
	std::string	name(10, '\0');

	for (int i = 0; i < 10; ++i)
		name[i] = rand() % 26 + 'a';
	return (name);
}

ZombieHorde::ZombieHorde(int n)
{
	if (n <= 0)
	{
		std::cout << "Can't create " << n << " zombies\n";
		this->horde = NULL;
		return ;
	}
	this->n = n;
	this->horde = new Zombie[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
		this->horde[i].setName(nameRandom());
}

ZombieHorde::~ZombieHorde(void)
{
	if (this->horde)
	{
		delete [] this->horde;
		std::cout << "ZombieHorde with " << n << " zombies was killed\n";
	}
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->n; ++i)
		horde[i].announce();
}
