/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:56:20 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 20:09:45 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
	ZombieHorde	horde(5);
	ZombieHorde	orda(1);
	horde.announce();
	orda.announce();
}
