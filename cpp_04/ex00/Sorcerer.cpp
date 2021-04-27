/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:25:40 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:45:28 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer() :
	name(""), title("")
{
	std::cout << "Sorcerer withou name and title is born!\n";
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :
	name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &obj)
{
	*this = obj;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer			&Sorcerer::operator=(const Sorcerer &right)
{
	this->name = right.name;
	this->title = right.title;
	return (*this);
}

const std::string	&Sorcerer::getName() const
{
	return (this->name);
}

const std::string	&Sorcerer::getTitle() const
{
	return (this->title);
}

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sor)
{
	out << "I am " << sor.getName() << ", " << sor.getTitle() << ", and I like ponies!\n";
	return (out);
}

void	Sorcerer::polymorph(const Victim &vic) const
{
	vic.getPolymorphed();
}
