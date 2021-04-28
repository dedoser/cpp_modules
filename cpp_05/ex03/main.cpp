/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:06:10 by sezreal           #+#    #+#             */
/*   Updated: 2021/04/28 21:22:45 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <unistd.h>

int main(void)
{
	std::cout << "============== Normal execution ==============" << std::endl;
	Form *testForm01 = 0;
	try
	{
		Bureaucrat b01("first", 1);
		Intern intern01;
		testForm01 = intern01.makeForm("robotomy request", "Bender");
	}
	catch (std::exception &e)
	{
		std::cerr << "If you're reading this, something went wrong" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "============ Form creation  error ============" << std::endl;
	Bureaucrat b01("first", 1);
	Intern intern01;
	Form *testForm02 = 0;
	try
	{
		testForm02 = intern01.makeForm("error name form", "target");	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "====== Normal form creating and signing ======" << std::endl;
	Form *testForm03 = 0;
	try
	{
		testForm03 = intern01.makeForm("presidential pardon", "Trillian");
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete testForm01;
	delete testForm02;
	delete testForm03;
	return 0;
}

