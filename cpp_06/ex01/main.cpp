/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 23:32:52 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 00:02:16 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

struct Data
{
	std::string	*str1;
	int			dig;
	std::string	*str2;
};


void	*serialize(void)
{
	srand(time(NULL));
	std::string	*ptr1 = new std::string(rand() % 5 + 4, ' ');
	std::string	*ptr3 = new std::string(rand() % 5 + 4, ' ');
	int			dig = rand();

	for (unsigned i = 0; i < (*ptr1).length(); ++i)
		(*ptr1)[i] = rand() % 26 + 'a';
	for (unsigned i = 0; i < (*ptr3).length(); ++i)
		(*ptr3)[i] = rand() % 26 + 'a';
	std::cout << "Values on the heap are: " << std::endl;
	std::cout << *ptr1 << std::endl << dig << std::endl << *ptr3 << std::endl;

	void	*res = ::operator new(2 * sizeof(std::string *) + sizeof(int));
	void	*tmp;

	*reinterpret_cast<std::string **>(res) = ptr1;
	tmp = *reinterpret_cast<std::string **>(res) + 1;
	*reinterpret_cast<int *>(tmp) = dig;
	tmp = reinterpret_cast<int *>(tmp) + 1;
	*reinterpret_cast<std::string **>(tmp) = ptr3;
	return (res);
}

Data	*deserialize(void *raw)
{
	Data	*res = new Data;
	res->str1 = *reinterpret_cast<std::string **>(raw);
	raw = *reinterpret_cast<std::string **>(raw) + 1;
	res->dig = *reinterpret_cast<int *>(raw);
	raw = reinterpret_cast<int *>(raw) + 1;
	res->str2 = *reinterpret_cast<std::string **>(raw);
	return (res);
}

int	main()
{
	Data	*res = deserialize(serialize());
	std::cout << "-------------------------" << std::endl;
	std::cout << *res->str1 << std::endl << res->dig << std::endl
			  << *res->str2 << std::endl;
	return (0);
}
