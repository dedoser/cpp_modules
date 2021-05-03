/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:50:42 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/03 23:26:17 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>

Converter::Converter(const std::string &arg)
{
	this->isInfNeg = arg == "-inf";
	this->isInfPos = (arg == "+inf" || arg == "inf");
	this->isNan = arg == "nan";
	this->value = atof(arg.c_str());
	this->len = arg.length();
	this->isFloat = arg[this->len - 1] == 'f';
	this->isZeroAfterDot = this->value - static_cast<int>(this->value) == 0.0000;
}

Converter::~Converter()
{
}

void	Converter::convertChar()
{
	char	c = static_cast<char>(this->value);

	std::cout << "char: ";
	if (this->value < 0 || this->value > 255
		|| this->isInfNeg || this->isInfPos || this->isNan)
		std::cout << "impossible\n";
	else if (isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable\n";
}

void	Converter::convertInt()
{
	std::cout << "int: ";
	if (this->value < INT_MIN || this->value > INT_MAX || this->isNan
		|| this->isInfPos || this->isInfNeg)
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(this->value)  << std::endl;
}

void	Converter::convertFloat()
{
	std::cout << "float: ";
	if (this->isNan)
		std::cout << "nan";
	else if (this->isInfNeg)
		std::cout << "-inf";
	else if (this->isInfPos)
		std::cout << "+inf";
	else
		std::cout << static_cast<float>(this->value);
	if (this->isZeroAfterDot)
		std::cout << ".0";
	std::cout << "f\n";
}

void	Converter::convertDouble()
{
	std::cout << "double: ";
	if (this->isNan)
		std::cout << "nan";
	else if (this->isInfNeg)
		std::cout << "-inf";
	else if (this->isInfPos)
		std::cout << "+inf";
	else
		std::cout << static_cast<double>(this->value);
	if (this->isZeroAfterDot)
		std::cout << ".0";
	std::cout << "\n";
}

void	Converter::convertAll()
{
	convertChar();
	convertInt();
	convertFloat();
	convertDouble();
}
