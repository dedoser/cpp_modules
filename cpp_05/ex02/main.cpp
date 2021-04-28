/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:06:10 by sezreal           #+#    #+#             */
/*   Updated: 2021/04/28 20:58:36 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <unistd.h>

int main(void)
{
	std::cout << "========== Nourmal execution ==========" << std::endl;
	try
	{
		Bureaucrat b01("first", 1);
		ShrubberyCreationForm scf1("garden");
		RobotomyRequestForm rrf1("Marvin");
		PresidentialPardonForm ppf1("Vogon");
		b01.signForm(scf1);
		b01.executeForm(scf1);
		scf1.execute(b01);
		b01.signForm(rrf1);
		rrf1.execute(b01);
		rrf1.execute(b01);
		rrf1.execute(b01);
		b01.signForm(ppf1);
		ppf1.execute(b01);
	}
	catch (std::exception &e)
	{
		std::cerr << "If you're reading this, something went wrong" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "===== Grade too low signing error =====" << std::endl;
	Bureaucrat b01("first", 1);
	Bureaucrat b02("last", 149);
	PresidentialPardonForm ppf2("Trillian");
	try
	{
		b02.signForm(ppf2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "========= Normal form signing =========" << std::endl;
	try
	{
		b01.signForm(ppf2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "==== Grade too low execution error ====" << std::endl;	
	try
	{
		ppf2.execute(b02);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "======== Normal form execution ========" << std::endl;
	try
	{
		ppf2.execute(b01);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

