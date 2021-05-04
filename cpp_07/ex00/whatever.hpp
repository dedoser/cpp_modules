/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 00:34:56 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 17:54:26 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class whatever
{
private:
	int	_value;
public:
	whatever(int value = 0);
	whatever(const whatever &obj);
	~whatever();
	bool		operator<(const whatever &right) const
					{return (this->_value < right._value);}
	bool		operator>(const whatever &right) const
					{return (this->_value > right._value);}
	bool		operator==(const whatever &right) const
					{return (this->_value == right._value);}
	bool		operator<=(const whatever &right) const
					{return (this->_value <= right._value);}
	bool		operator>=(const whatever &right) const
					{return (this->_value >= right._value);}
	int			getValue(void) const
					{return (_value);}
	
};

whatever::whatever(int value)
{
	_value = value;
}

whatever::~whatever()
{
}

whatever::whatever(const whatever &obj) :
	_value(obj._value)
{}

std::ostream	&operator<<(std::ostream &out, const whatever &obj)
{
	out << obj.getValue();
	return (out);
}

template <typename T>
void	swap(T &a1, T &a2)
{
	T	tmp;

	tmp = a1;
	a1 = a2;
	a2 = tmp;
}

template <typename T>
const T	&min(const T &lv, const T &rv)
{
	if (lv < rv)
		return (lv);
	else
		return (rv);
}

template <typename T>
const T	&max(const T &lv, const T &rv)
{
	if (lv > rv)
		return (lv);
	else
		return (rv);
}
