/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:31:13 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 18:02:40 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(const std::string &name)
{
	std::cout << "Let's get this party started!\n"
			<< "My name is " << name << std::endl;
	this->HP = 60;
	this->maxHP = 60;
	this->energy = 120;
	this->MaxEnergy = 120;
	this->level = 1;
	this->name = name;
	this->rangedDmg = 60;
	this->meleeDmg = 5;
	this->armor = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj)
{
	*this = obj;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &right)
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

void	NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout << "NINJA-TP " << this->name << " attacks " << target
			<< " at range, causing " << this->rangedDmg << " points of damage!\n";
}

void	NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << "NINJA-TP " << this->name << " attacks " << target
			<< " at melee, causing " << this->meleeDmg << " points of damage!\n";
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	if (this->HP == 0)
	{
		std::cout << "Sayonara\n";
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
	std::cout << "ORAORAORA "
				<< "Health = " << this->HP << std::endl;
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	if (this->HP == this->maxHP)
	{
		std::cout << "OISHII\n";
		return ;
	}
	if (amount + this->HP > this->maxHP)
		this->HP = this->maxHP;
	else
		this->HP += amount;
	std::cout << "ARIGATO! Now it's " << this->HP << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clp)
{
	std::cout << "PUT ON YOUR SHOES, PATHETIC CL4P_TP\n";
	clp.beRepaired(5);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &clp)
{
	std::cout << "Here's your onigiri, oni-tyan\n";
	clp.beRepaired(10);
}

void	NinjaTrap::ninjaShoebox(FragTrap &clp)
{
	std::cout << "RAGE AGAINST THE MACHINE\n";
	clp.takeDamage(20);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &clp)
{
	std::cout << "Close the door, plz\n";
	clp.takeDamage(1);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "fshhhhhhhhh\n";
}
