/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:10:33 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 20:31:07 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "str = " << str << std::endl;
	ref[0] = 'O';
	std::cout << "str = " << str << std::endl
			<< "ref = " << ref << std::endl;
	(*ptr)[1] = 'H';
	std::cout << "str = " << str << std::endl
			<< "ptr = " << *ptr << std::endl;
	return (0);
}
