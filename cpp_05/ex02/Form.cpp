/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:24:43 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:50:41 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	name(""), isSigned(false), gradeSign(150), gradeExec(150), maxGrade(1), minGrade(150)
{
}

Form::Form(const std::string &name, int gradeSign, int gradeExec) :
	name(name), isSigned(false), gradeSign(gradeSign), gradeExec(gradeExec),
	maxGrade(1), minGrade(150)
{
	if (this->gradeSign < maxGrade || this->gradeSign < maxGrade)
		throw Form::GradeTooHighException();
	if (this->gradeSign > minGrade || this->gradeSign > minGrade)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &obj) :
	name(obj.name), isSigned(false), gradeSign(obj.gradeSign), gradeExec(obj.gradeExec),
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

int		Form::getGradeExec() const
{
	return (this->gradeExec);
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
	if (bur.getGrade() <= this->getGradeSign())
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	if (obj.getIsSigned())
		out << obj.getName() << " form is signed. ";
	else
		out << obj.getName() << " form is not signed. ";
	out << "Required grade to be signed is " << obj.getGradeSign() << std::endl;
	return (out);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char	*Form::IsNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

void		Form::execute(const Bureaucrat &executor) const
{
	executor.getGrade();
}
