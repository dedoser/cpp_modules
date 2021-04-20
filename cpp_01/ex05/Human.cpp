/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:45:51 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 20:55:32 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

std::string	Human::identify()
{
	return (this->brain.identify());
}

Brain	&Human::getBrain()
{
	return (this->brain);
}

Human::~Human()
{
}
