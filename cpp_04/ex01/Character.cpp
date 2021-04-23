/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:31:36 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/23 21:56:43 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) :
	name(name), apoints(40), weapon(NULL)
{
}

Character::Character(const Character &obj)
{
	this->name = obj.name;
	this->apoints = obj.apoints;
	this->weapon = obj.weapon;
}

Character::~Character()
{
}

void	Character::recoverAP()
{
	this->apoints += 10;
	if (this->apoints > 40)
		this->apoints = 40;
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->apoints < this->weapon->getAPCost())
		return ;
	this->apoints -= this->weapon->getAPCost();
	enemy->takeDamage(this->weapon->getDamage());
	std::cout << this->name << " attacks " << enemy->getType() <<
		" with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	if (enemy->getHP() <= 0)
		delete enemy;
}

Character	&Character::operator=(const Character &right)
{
	this->name = right.name;
	this->apoints = right.apoints;
	this->weapon = right.weapon;
	return (*this);
}

const AWeapon	*Character::getWeapon() const
{
	return (this->weapon);
}

int		Character::getAP() const
{
	return (this->apoints);
}

const std::string	&Character::getName() const
{
	return (this->name);
}

std::ostream	&operator<<(std::ostream &out, const Character &ch)
{
	if (ch.getWeapon() == NULL)
		out << ch.getName() << " has " << ch.getAP() << " AP and is unarmed\n";
	else
		out << ch.getName() << " has " << ch.getAP() << " AP and wields a " <<
			ch.getWeapon()->getName() << std::endl;
	return (out);
}
