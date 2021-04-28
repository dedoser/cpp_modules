/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:52:24 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:50:10 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				isSigned;
	const int			gradeSign;
	const int			gradeExec;
	const int			maxGrade;
	const int			minGrade;
public:
	Form();
	Form(const std::string &name, int gradeSign, int gradeExec);
	Form(const Form &obj);
	virtual ~Form();
	Form				&operator=(const Form &right);
	int					getGradeSign() const;
	int					getGradeExec() const;
	const std::string	&getName() const;
	void				beSigned(const Bureaucrat &bur);
	bool				getIsSigned() const;
	virtual void		execute(const Bureaucrat &executor) const;
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class IsNotSignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, const Form &obj);
