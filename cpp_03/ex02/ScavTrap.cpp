/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:07:22 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 18:04:43 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name)
{
	srand(time(NULL));
	std::cout << "Hey everybody! Check out my package!\n"
			<< "My name is " << name << std::endl;
	this->HP = 100;
	this->maxHP = 100;
	this->energy = 50;
	this->MaxEnergy = 50;
	this->level = 1;
	this->name = name;
	this->rangedDmg = 15;
	this->meleeDmg = 20;
	this->armor = 3;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &right)
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

void	ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target
			<< " at range, causing " << this->rangedDmg << " points of damage!\n";
}

void	ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target
			<< " at melee, causing " << this->meleeDmg << " points of damage!\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->HP == 0)
	{
		std::cout << "Wheeeee! I'm already dead\n";
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
	std::cout << "Why do I even feel pain?! "
				<< "Health = " << this->HP << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->HP == this->maxHP)
	{
		std::cout << "Healsies!\n";
		return ;
	}
	if (amount + this->HP > this->maxHP)
		this->HP = this->maxHP;
	else
		this->HP += amount;
	std::cout << "Sweet life juice! Now it's " << this->HP << std::endl;
}

void	ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string	mass[5] = {"Firepunch", "Onepuuunch", "Katoon", "Rasengan", "slap your bass"};
	std::cout << this->name << " challenge " << target << " to " << mass[rand() % 5] << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Poop.\n";
}
