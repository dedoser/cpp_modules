/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:52:24 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 22:15:51 by fignigno         ###   ########.fr       */
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
	const int			gradeBeSign;
	const int			gradeSign;
	const int			maxGrade;
	const int			minGrade;
public:
	Form();
	Form(const std::string &name, int gradeBeSign, int gradeSign);
	Form(const Form &obj);
	~Form();
	Form				&operator=(const Form &right);
	int					getGradeBeSign() const;
	int					getGradeSign() const;
	const std::string	&getName() const;
	void				beSigned(const Bureaucrat &bur);
	bool				getIsSigned() const;
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

std::ostream	&operator<<(std::ostream &out, const Form &obj);
