/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:07:20 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:51:22 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) :
	hp(hp), type(type)
{
}

Enemy::Enemy(const Enemy &obj)
{
	*this = obj;
}

Enemy::~Enemy()
{
}

Enemy	&Enemy::operator=(const Enemy &right)
{
	this->hp = right.hp;
	this->type = right.type;
	return (*this);
}

const std::string	&Enemy::getType() const
{
	return (this->type);
}

int		Enemy::getHP() const
{
	return (this->hp);
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	this->hp -= damage;
	if (this->hp < 0)
		this->hp = 0;
}
