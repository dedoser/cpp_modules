/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:46:04 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/08 16:01:15 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::ReadFirstName()
{
	std::getline(std::cin, first_name);
}

void	Contact::ReadLastName()
{
	std::getline(std::cin, last_name);
}

void	Contact::ReadNickname()
{
	std::getline(std::cin, nickname);
}

void	Contact::ReadLogin()
{
	std::getline(std::cin, login);
}

void	Contact::ReadPostalAddress()
{
	std::getline(std::cin, postal_address);
}

void	Contact::ReadEmail()
{
	std::getline(std::cin, email);
}

void	Contact::ReadPhoneNum()
{
	std::getline(std::cin, phone_num);
}

void	Contact::ReadFavMeal()
{
	std::getline(std::cin, fav_meal);
}

void	Contact::ReadBirthDate()
{
	std::getline(std::cin, birth_date);
}

void	Contact::ReadUnderwearColor()
{
	std::getline(std::cin, underwear_color);
}

void	Contact::ReadDarkestSecret()
{
	std::getline(std::cin, darkest_secret);
}

void	PrintWidthStr(std::string &str, bool pipe)
{
	if (str.length() >= 10)
		std::cout << std::setw(9) << str.substr(0, 9)
		<< '.';
	else
		std::cout <<std::setw(10) << str;
	if (pipe)
		std::cout << '|';
}

void	Contact::PrintInfo(int index)
{
	std::cout << std::setw(10) << index << '|';
	PrintWidthStr(this->first_name, true);
	PrintWidthStr(this->last_name, true);
	PrintWidthStr(this->nickname, false);
	std::cout << std::endl;
}

void	Contact::PrintList()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal_address << std::endl;
	std::cout << "Email address: " << this->email << std::endl;
	std::cout << "Phone number: " << this->phone_num << std::endl;
	std::cout << "Birthday date: " << this->birth_date << std::endl;
	std::cout << "Favorite meal: " << this->fav_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}
