/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:16:35 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 00:19:49 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->value = value << this->count;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->value = roundf(value * (1 << this->count));
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	// this->value = obj.getRawBits();
	*this = obj;
}

Fixed	&Fixed::operator=(const Fixed &right)
{
	std::cout << "Assignation operator called\n";
	this->value = right.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->count));
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->count);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

std::ostream&	operator<<(std::ostream& out, Fixed const& right)
{
	out << right.toFloat();
	return (out);
}
