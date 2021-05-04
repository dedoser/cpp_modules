/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:35:23 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 23:48:38 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>

Span::Span(unsigned int n) :
	_len(n)
{
	_cur = 0;
	_mass = new int[_len];
}

Span::~Span()
{
	delete [] _mass;
}

void	Span::addNumber(int elem)
{
	if (_cur == _len)
		throw Span::TooMuchElements();
	_mass[_cur++] = elem;
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	res;
	unsigned int	tmp;

	if (_len <= 1)
		throw TooMuchElements();
	res = std::abs(_mass[0] - _mass[1]);
	for (unsigned int i = 0; i < _len - 1; ++i)
		for (unsigned int j = i + 1; j < _len; ++j)
		{
			tmp = std::abs(_mass[i] - _mass[j]);
			if (tmp < res)
				res = tmp;
		}
	return (res);
}

unsigned int	Span::longestSpan(void) const
{
	unsigned int	res;
	unsigned int	tmp;

	if (_len <= 1)
		throw TooMuchElements();
	res = std::abs(_mass[0] - _mass[1]);
	for (unsigned int i = 0; i < _len - 1; ++i)
		for (unsigned int j = i + 1; j < _len; ++j)
		{
			tmp = std::abs(_mass[i] - _mass[j]);
			if (tmp > res)
				res = tmp;
		}
	return (res);
}
