/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:20:48 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 20:50:37 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

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
	Bureaucrat(int grade, const std::string &name);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat	&operator=(const Bureaucrat &right);
	int					getGrade() const;
	const std::string	&getName() const;
	void				decGrade();
	void				incGrade();
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
