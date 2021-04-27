/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:24:43 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 22:38:08 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	name(""), isSigned(false), gradeBeSign(150), gradeSign(150), maxGrade(1), minGrade(150)
{
}

Form::Form(const std::string &name, int gradeBeSign, int gradeSign) :
	name(name), isSigned(false), gradeBeSign(gradeBeSign), gradeSign(gradeSign),
	maxGrade(1), minGrade(150)
{
	if (this->gradeBeSign < maxGrade || this->gradeSign < maxGrade)
		throw Form::GradeTooHighException();
	if (this->gradeBeSign > minGrade || this->gradeSign > minGrade)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &obj) :
	name(obj.name), isSigned(false), gradeBeSign(obj.gradeBeSign), gradeSign(obj.gradeSign),
	maxGrade(1), minGrade(150)
{
}

Form::~Form()
{
}

Form	&Form::operator=(const Form &right)
{
	this->isSigned = right.isSigned;
	return (*this);
}

int		Form::getGradeSign() const
{
	return (this->gradeSign);
}

int		Form::getGradeBeSign() const
{
	return (this->gradeBeSign);
}

const std::string	&Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= this->getGradeBeSign())
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	if (obj.getIsSigned())
		out << obj.getName << " form is signed. ";
}
