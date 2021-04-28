/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:33:01 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:57:53 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
	name(""), grade(150), maxGrade(1), minGrade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
	name(name), grade(grade), maxGrade(1), minGrade(150)
{
	if (grade > this->minGrade)
		throw Bureaucrat::GradeTooLowException();
	if (grade < this->maxGrade)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) :
	name(obj.name), grade(obj.grade), maxGrade(1), minGrade(150)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &right)
{
	this->name = right.name;
	this->grade = right.grade;
	return (*this);
}

int					Bureaucrat::getGrade() const
{
	return (this->grade);
}

const std::string	&Bureaucrat::getName() const
{
	return (this->name);
}

void				Bureaucrat::decGrade()
{
	if (this->grade == this->minGrade)
		throw GradeTooLowException();
	this->grade++;
}

void				Bureaucrat::incGrade()
{
	if (this->grade == this->maxGrade)
		throw GradeTooHighException();
	this->grade--;
}

void				Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " cannot sign " << form.getName() << " because "
			<< e.what() << std::endl;
	}
	std::cout << this->getName() << " signed form " << form.getName() << std::endl;
}

void				Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}
