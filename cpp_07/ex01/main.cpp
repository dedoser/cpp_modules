/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:24:17 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 17:27:09 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	f(const int &a)
{
	std::cout << a + 1 << std::endl;
}

int main()
{
	int	*array = new int[10];
	
	for (int i = 0; i < 10; ++i)
		array[i] = i;
	iter(array, 10, f);
	delete [] array;
}
