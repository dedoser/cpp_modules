/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:57:04 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 19:52:22 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) :
	Age(age), Name(name), Color(color)
{
	std::cout << this->Color << " pony " << this->Name
			<< ", age - " << this->Age <<  " was created\n";
}

Pony::~Pony(void)
{
	std::cout << this->Color << " pony " << this->Name
			<< ", age - " << this->Age <<  " was destructed\n";
}

int	Pony::GetAge(void)
{
	return (this->Age);
}

std::string	Pony::GetColor(void)
{
	return (this->Color);
}

std::string	Pony::GetName(void)
{
	return (this->Name);
}
