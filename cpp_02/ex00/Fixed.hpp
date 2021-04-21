/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:18:03 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/21 19:23:52 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int					value;
	static const int	count = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	~Fixed();
	Fixed	&operator=(const Fixed &right);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
