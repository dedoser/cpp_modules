/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:45:14 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:49:10 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &name);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	~PresidentialPardonForm();
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &right);
	void					execute(const Bureaucrat &executor) const;
};
