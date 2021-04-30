/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:48:06 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/30 19:36:54 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Converter
{
private:
	double	value;
	int		len;
	bool	isNan;
	bool	isInfPos;
	bool	isInfNeg;
	bool	isFloat;
	bool	isZeroAfterDot;
public:
	Converter(const std::string &arg);
	~Converter();
	void	convertInt();
	void	convertFloat();
	void	convertDouble();
	void	convertChar();
	void	convertAll();
};
