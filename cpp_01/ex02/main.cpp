/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:47:02 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 00:51:38 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	event;
	Zombie		*zombie1;
	Zombie		*zombie2;

	event.setZombieType("drunk");
	zombie1 = event.randomChump();
	delete(zombie1);

	event.setZombieType("Saimon Pegg");
	zombie2 = event.newZombie("Shon");
	zombie2->announce();
	delete(zombie2);
}
