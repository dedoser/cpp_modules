/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:31:54 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 19:52:22 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
private:
	int	Age;
	std::string Name;
	std::string Color;
public:
	Pony(std::string name, std::string color, int age);
	~Pony(void);
	std::string	GetName(void);
	int			GetAge(void);
	std::string	GetColor(void);
};

#endif
