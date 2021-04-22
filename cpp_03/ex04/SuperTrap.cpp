/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:20:19 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 21:11:15 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(const std::string &name) :
	FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap is created!\n"
			<< "My name is " << name << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &obj) :
	FragTrap(name), NinjaTrap(name)
{
	*this = obj;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &right)
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

void	SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}

unsigned int	SuperTrap::getHP(void)
{
	return (this->HP);
}

unsigned int	SuperTrap::getMaxHP(void)
{
	return (this->maxHP);
}

unsigned int	SuperTrap::getEnergy(void)
{
	return (this->energy);
}

unsigned int	SuperTrap::getMaxEnergy(void)
{
	return (this->energy);
}

unsigned int	SuperTrap::getMeleeDmg(void)
{
	return (this->meleeDmg);
}

unsigned int	SuperTrap::getRangedDmg(void)
{
	return (this->rangedDmg);
}

unsigned int	SuperTrap::getArmor(void)
{
	return (this->armor);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap's death\n";
}
