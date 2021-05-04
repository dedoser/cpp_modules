/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:09:26 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 17:21:00 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	mainq()
{
	whatever	a, b, c(10);

	std::cout << "a is " << a << std::endl
			  << "b is " << b << std::endl
			  << "c is " << c << std::endl;
	std::cout << "-----------AFTER SWAP-------------\n";
	swap(a, b);
	swap(b, c);
	std::cout << "a is " << a << std::endl
			  << "b is " << b << std::endl
			  << "c is " << c << std::endl;
	std::cout << "Min is " << min(a, min(b, c)) << std::endl;
	std::cout << "Max is " << max(a, max(b, c)) << std::endl;
	return (0);
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	return 0;
}
