/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:05:40 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 21:23:41 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form	*f1(const std::string &name)
{
	return (new ShrubberyCreationForm(name));
}

Form		*f2(const std::string &name)
{
	return (new RobotomyRequestForm(name));
}

Form	*f3(const std::string &name)
{
	return (new PresidentialPardonForm(name));
}

Form	*Intern::makeForm(const std::string &type, const std::string &name)
{
	std::string types[3] = {"shrubbery request", "robotomy request", "presidential pardon"};
	Form *(*f[3])(const std::string &) = {f1, f2, f3};
	for (int i = 0; i < 3; ++i)
	{
		if (types[i] == type)
		{
			std::cout << "Intern creates " << type << " form\n";
			return (f[i](name));
		}
	}
	throw WrongTypeFormException();
}

const char	*Intern::WrongTypeFormException::what() const throw()
{
	return ("Wrong type of form");
}
