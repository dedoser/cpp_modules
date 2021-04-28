/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:30:39 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 23:10:10 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <cctype>
#include <iostream>
#include <cstring>

void	print_char(char *str)
{
	std::cout << "char: ";
	if (strlen(str) >= 1)
		std::cout << "impossible\n";
	else
	{
		if (!isprint(str[0]))
			std::cout << "Non displayable\n";
		else
			std::cout << str[0] << "\n";
	}
}

void	print_int(char *str)
{
	int	res;
	
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	print_char(argv[1]);
	print_int(argv[1]);
	print_float(argv[1]);
	printf_double(argv[1]);
}
