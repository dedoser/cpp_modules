/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:54:32 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 23:28:02 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"
#include <iostream>

int main()
{
	std::vector<int>	vec(5, 1);
	for (int i = 0; i < 5; ++i)
		vec[i] = i;
	if (easyfind(vec, -123) != vec.end())
		std::cout << "This element is in container\n";
	else
		std::cout << "Can't find this element in container\n";
}
