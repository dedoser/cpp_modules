/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 00:31:12 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 18:05:14 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "Let's get this party started!\n"
			<< "My name is " << name << std::endl;
	this->HP = 100;
	this->maxHP = 100;
	this->energy = 100;
	this->MaxEnergy = 100;
	this->level = 1;
	this->name = name;
	this->rangedDmg = 20;
	this->meleeDmg = 30;
	this->armor = 5;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	*this = obj;
}

FragTrap	&FragTrap::operator=(const FragTrap &right)
{
	this->HP = right.HP;
	this->maxHP = right.maxHP;
	this->energy = right.energy;
	this->MaxEnergy = right.MaxEnergy;
	this->level = right.level;
	this->name = right.name;
	this->rangedDmg = right.rangedDmg;
	this->meleeDmg = right.meleeDmg;
	this->armor = right.armor;
	return (*this);
}

void	FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target
			<< " at range, causing " << this->rangedDmg << " points of damage!\n";
}

void	FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target
			<< " at melee, causing " << this->meleeDmg << " points of damage!\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->HP == 0)
	{
		std::cout << "Oh yeah? Well, uh... yeah.\n";
		return ;
	}
	if (amount < this->armor)
		amount = 0;
	else
		amount -= this->armor;
	if (amount > this->HP)
		this->HP = 0;
	else
		this->HP -= amount;
	std::cout << "Come back here! I'll gnaw your legs off! "
				<< "Health = " << this->HP << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->HP == this->maxHP)
	{
		std::cout << "Health! Eww, what flavor is red?\n";
		return ;
	}
	if (amount + this->HP > this->maxHP)
		this->HP = this->maxHP;
	else
		this->HP += amount;
	std::cout << "I found health! Now it's " << this->HP << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	std::string	pool[5] = {"This time it'll be awesome, I promise, ", "It's about to get magical, ",
						"What will he do next, ", "Don't tell me that wasn't awesome, ", "Place your bets, "};
	if (this->energy - 25 < 0)
	{
		std::cout << "Where'd all my bullets go?\n";
		return ;
	}
	this->energy -= 25;
	std::cout << pool[rand() % 5] << target << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "I'll die the way I lived: annoying!\n";
}
