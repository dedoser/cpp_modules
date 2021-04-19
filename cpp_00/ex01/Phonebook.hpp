/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:27:13 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/07 22:54:04 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class Phonebook
{
private:
	Contact	book[8];
	int		count;
public:
	Phonebook();
	~Phonebook();
	void	AddContact();
	void	SearchContact();
};

#endif
