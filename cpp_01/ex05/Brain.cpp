/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:38:57 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 20:54:09 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->size = 1;
}

std::string	Brain::identify()
{
	std::stringstream	ss;
	std::string			address;

	ss << this;
	ss >> address;
	return (address);
}

Brain::~Brain()
{
}
