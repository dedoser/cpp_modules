/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:05:32 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 21:19:26 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <string>

class Intern
{
public:
	Intern();
	~Intern();
	Form	*makeForm(const std::string &type, const std::string &name);
	class WrongTypeFormException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};
