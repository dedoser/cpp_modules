/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:43:22 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 20:51:36 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat a1(1, "Bob");
	Bureaucrat a2(150, "Max");
	try
	{	
		//Bureaucrat t1(0, "qwe");
		//Bureaucrat t2(151, "qwe");
		// a1.incGrade();
		a2.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << a1 << a2;
}
