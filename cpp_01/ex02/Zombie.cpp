/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:30:11 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 19:52:22 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) :
	name(name), type(type)
{
	std::cout << this->name << " was created, type - " << this->type << "\n";
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> "
			<< "I want a Cornetto ice cream\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " was killed\n";
}
