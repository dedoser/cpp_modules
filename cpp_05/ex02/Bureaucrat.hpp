/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:20:48 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:52:52 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string	name;
	int			grade;
	const int	maxGrade;
	const int	minGrade;
public:
	Bureaucrat();
	~Bureaucrat(){}
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat	&operator=(const Bureaucrat &right);
	int					getGrade() const;
	const std::string	&getName() const;
	void				decGrade();
	void				incGrade();
	void				signForm(Form &form);
	void				executeForm(const Form &form);
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const _NOEXCEPT;
	};
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const _NOEXCEPT;
	};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);
