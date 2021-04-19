/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:36:09 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 00:44:11 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <ctime>
#include <cstdlib>

class ZombieEvent
{
private:
	std::string	type;
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();
};

#endif
