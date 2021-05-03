/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 00:07:10 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 00:31:16 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include <iostream>

Base	*genA()
{
	std::cout << "generate A\n";
	return (new A());
}

Base	*genB()
{
	std::cout << "generate B\n";
	return (new B());
}

Base	*genC()
{
	std::cout << "generate C\n";
	return (new C());
}

Base	*generate(void)
{
	Base	*(*f[3])() = {genA, genB, genC};

	return (f[rand() % 3]());
}

int		try_dyn_cast(Base &p, char c)
{
	A	res1;
	B	res2;
	C	res3;

	try
	{
		if (c == 'A')
			res1 = dynamic_cast<A &>(p);
		else if (c == 'B')
			res2 = dynamic_cast<B &>(p);
		else if (c == 'C')
			res3 = dynamic_cast<C &>(p);
		return (1);
	}
	catch(const std::bad_cast &e)
	{
		return (0);
	}
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C\n";
}

void	identify_from_reference(Base &p)
{
	if (try_dyn_cast(p, 'A'))
		std::cout << "A\n";
	else if (try_dyn_cast(p, 'B'))
		std::cout << "B\n";
	else if (try_dyn_cast(p, 'C'))
		std::cout << "C\n";
}

int	main()
{
	srand(time(NULL));
	std::cout << "-----TRY_POINTER----\n";
	for (int i = 0; i < 5; ++i)
		identify_from_pointer(generate());
	std::cout << "-----TRY_REFERENCE----\n";
	for (int i = 0; i < 5; ++i)
		identify_from_reference(*generate());
}
