/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:25:40 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 21:44:31 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :
	name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\n";
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
