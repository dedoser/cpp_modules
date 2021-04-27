/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:02:22 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 20:03:07 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "";
	for (int i = 0; i < 4; ++i)
		this->inv[i] = NULL;
	this->count = 0;
}

Character::Character(const std::string &name)
{
	this->name = name;
	this->count = 0;
	for (int i = 0; i < 4; ++i)
		this->inv[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < this->count; ++i)
		delete this->inv[i];
}

Character			&Character::operator=(const Character &right)
{
	this->name = right.name;
	this->count = right.count;
	for (int i = 0; i < this->count; ++i)
		this->inv[i] = right.inv[i]->clone();
	return (*this);
}

const std::string	&Character::getName() const
{
	return (this->name);
}

void				Character::equip(AMateria *m)
{
	if (this->count == 4)
		return ;
	for (int i = 0; i < this->count; ++i)
		if (this->inv[i] == m)
			return ;
	this->inv[this->count++] = m;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || this->count <= idx)
		return ;
	this->inv[idx] = NULL;
	this->count--;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 | this->count <= idx)
		return ;
	this->inv[idx]->use(target);
}
