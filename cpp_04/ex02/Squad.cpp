/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:05:59 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:42:05 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <cstdlib>

Squad::Squad() :
	group(NULL), count(0)
{
}

Squad::Squad(const Squad &obj)
{
	*this = obj;
}

Squad::~Squad()
{
	if (this->group)
	{
		for (int i = 0; i < this->count; ++i)
			delete this->group[i];
		delete [] this->group;
	}
}

Squad	&Squad::operator=(const Squad &right)
{
	for (int i = 0; i < count; ++i)
		delete this->group[i];
	delete [] this->group;
	this->count  = right.count;
	if (this->count)
		this->group = new ISpaceMarine*[this->count];
	for (int i = 0; i < count; ++i)
		this->group[i] = right.group[i]->clone();
	return (*this);
}

int		Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine	*Squad::getUnit(int num) const
{
	if (num < 0 || num > count - 1)
		return (NULL);
	return(this->group[num]);
}

void	Squad::increaseGroup()
{
	ISpaceMarine	**res = new ISpaceMarine*[++this->count];
	for (int i = 0; i < this->count - 1; ++i)
		res[i] = this->group[i];
	if (this->group)
		delete [] this->group;
	this->group = res;
}

int				Squad::push(ISpaceMarine *marine)
{
	for (int i = 0; i < this->count; ++i)
		if (this->group[i] == marine)
			return (this->count);
	this->increaseGroup();
	this->group[this->count - 1] = marine;
	return (this->count);
}
