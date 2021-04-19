/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:14:03 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/08 01:57:21 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string		line;
	Phonebook		phonebook;
	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, line);
		if (line == "ADD")
			phonebook.AddContact();
		else if (line == "SEARCH")
			phonebook.SearchContact();
		else if (line == "EXIT")
			return (0);
		else
			std::cout << "Wrong input" << std::endl;
	}
	return (0);
}
