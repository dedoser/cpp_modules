/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:03:55 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 19:52:44 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	pony("Pasha", "Brown", 5);
	
	std::cout << "Pony was created on the stack\n";
}

void	ponyOnTheHeap(void)
{
	Pony	*pony;

	pony = new Pony("Vasya", "White", 1);
	std::cout << "Pony was created on the heap\n";
	delete pony;
}


int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
