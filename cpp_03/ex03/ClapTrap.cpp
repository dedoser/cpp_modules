/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:30:30 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 18:01:51 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "...LOADING...CL4P_TP was created\n";
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "...LOADING...CL4P_TP was created\n"
			<< "My name is " << name << std::endl;
	this->HP = 100;
	this->maxHP = 100;
	this->energy = 100;
	this->MaxEnergy = 100;
	this->level = 1;
	this->name = name;
	this->rangedDmg = 0;
	this->meleeDmg = 0;
	this->armor = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &right)
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

void	ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target
			<< " at range, causing " << this->rangedDmg << " points of damage!\n";
}

void	ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target
			<< " at melee, causing " << this->meleeDmg << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP == 0)
	{
		std::cout << "I am already dead\n";
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
	std::cout << "Why are you doing this? "
				<< "Health = " << this->HP << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP == this->maxHP)
	{
		std::cout << "I am already healthy\n";
		return ;
	}
	if (amount + this->HP > this->maxHP)
		this->HP = this->maxHP;
	else
		this->HP += amount;
	std::cout << "Thanks! My health is " << this->HP << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P_TP was destroyed. BYE...\n";
}
