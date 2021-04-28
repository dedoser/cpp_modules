/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:48:16 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 17:54:31 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	a1(1, "Bob");
	Bureaucrat	a2(150, "Max");
	Form		f1("school", 5, 5);
	try
	{	
		Form	f2("school", 1, 150);
		//Bureaucrat t1(0, "qwe");
		//Bureaucrat t2(151, "qwe");
		// a1.incGrade();
		// a2.decGrade();
		a1.signForm(f1);
		a2.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << a1 << a2 << f1;
}
