/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:31:23 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 23:47:31 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

class Span
{
private:
	int					*_mass;
	const unsigned int	_len;
	unsigned int		_cur;
public:
	Span(unsigned int n);
	~Span();
	class TooMuchElements : public std::exception
	{
		const char *what() const throw()
		{
			return ("Too much elements");
		}
	};
	void			addNumber(int elem);
	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;
};
