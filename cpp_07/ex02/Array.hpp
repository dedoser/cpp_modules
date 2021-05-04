/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:31:13 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 18:53:01 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <stdexcept>

template <typename T>
class Array
{
private:
	T				*_mass;
	unsigned int	_len;
public:
	Array()
	{
		_mass = NULL;
		_len = 0;
	}
	Array(unsigned int n)
	{
		_mass = new T[n];
		_len = n;
	}
	Array(const Array &obj)
	{
		_len = obj._len;
		_mass = new T[_len];
		for (unsigned int i = 0; i < _len; ++i)
			_mass[i] = obj._mass[i];
	}
	~Array()
	{
		if (_mass != NULL)
			delete [] _mass;
	}
	Array			&operator=(const Array &right)
	{
		if (this == &right)
			return (*this);
		_len = right._len;
		if (_mass != NULL)
			delete [] _mass;
		_mass = new T[_len];
		for (unsigned int i = 0; i < _len; ++i)
			_mass[i] = right._mass[i];
		return (*this);
	}
	unsigned int	size() const
	{
		return (_len);
	}
	T				&operator[](int n) const
	{
		if ((unsigned int)n >= _len || n < 0)
			throw std::out_of_range("Out of range");
		return (_mass[n]);
	}
};
