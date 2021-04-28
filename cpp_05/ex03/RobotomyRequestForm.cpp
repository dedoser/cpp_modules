/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:22:24 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:51:58 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() :
	Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) :
	Form(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) :
	Form(obj)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &right)
{
	this->Form::operator=(right);
	return (*this);
}

void				RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw Form::IsNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	std::cout << "some drilling noises\n";
	if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized successfully\n";
	else
		std::cout << "It's a failure\n";
}
