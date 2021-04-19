/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:28:49 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/08 16:01:43 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	count = 0;
}

Phonebook::~Phonebook() {}

void	Phonebook::AddContact()
{
	if (count == 8)
	{
		std::cout << "Can't add more than 8 contacts" << std::endl;
		return ;
	}
	std::cout << "Enter first name: ";
	book[count].ReadFirstName();
	std::cout << "Enter last name: ";
	book[count].ReadLastName();
	std::cout << "Enter nickname: ";
	book[count].ReadNickname();
	std::cout << "Enter postal address: ";
	book[count].ReadPostalAddress();
	std::cout << "Enter email address: ";
	book[count].ReadEmail();
	std::cout << "Enter phone number: ";
	book[count].ReadPhoneNum();
	std::cout << "Enter birthday date: ";
	book[count].ReadBirthDate();
	std::cout << "Enter favorite meal: ";
	book[count].ReadFavMeal();
	std::cout << "Enter underwear color: ";
	book[count].ReadUnderwearColor();
	std::cout << "Enter darkest secret: ";
	book[count].ReadDarkestSecret();
	count++;
}

void	Phonebook::SearchContact()
{
	int				index;
	std::string		line;

	std::cout << std::setw(10) << "index" << '|'
			<< std::setw(10) << "first name" << '|'
			<< std::setw(10) << "last name" << '|'
			<< std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < count; ++i)
		book[i].PrintInfo(i + 1);
	std::cout << "Enter desirable index: ";
	std::getline(std::cin, line);
	if (line.length() != 1 && !isdigit(line[0]))
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	index = line[0] - '0';
	if (index < 1 || index > this->count)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	else
		book[index - 1].PrintList();
}
