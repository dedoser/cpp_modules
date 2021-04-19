/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:34:25 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/08 01:59:24 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email;
	std::string	phone_num;
	std::string	birth_date;
	std::string	fav_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
public:
	Contact();
	~Contact();
	void	ReadFirstName();
	void	ReadLastName();
	void	ReadNickname();
	void	ReadLogin();
	void	ReadPostalAddress();
	void	ReadEmail();
	void	ReadPhoneNum();
	void	ReadBirthDate();
	void	ReadFavMeal();
	void	ReadUnderwearColor();
	void	ReadDarkestSecret();
	void	PrintInfo(int index);
	void	PrintList();
};


#endif
