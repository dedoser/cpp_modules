/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:18:57 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:49:14 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &name);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &right);
	void execute(const Bureaucrat &executor) const;
};
