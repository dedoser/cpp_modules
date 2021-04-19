/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:08:40 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/07 17:29:57 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	Megaphone(char &c)
{
	if (c >= 'a' && c <= 'z')
		c += 'A' - 'a';
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; ++i)
	{
		for (int j = 0; argv[i][j]; ++j)
			Megaphone(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
	
}
