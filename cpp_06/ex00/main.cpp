/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:30:39 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/03 23:24:00 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Converter.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Zero parametres\n";
		return (0);
	}
	Converter conv(argv[1]);
	conv.convertAll();
}
