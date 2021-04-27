/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:34:02 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 19:20:42 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		this->mem[i] = NULL;
	this->count = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->count; ++i)
		delete this->mem[i];
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (this->count == 4)
		return ;
	this->mem[this->count++] = m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->count; ++i)
		if (this->mem[i]->getType() == type)
			return (this->mem[i]->clone());
	return (NULL);
}
