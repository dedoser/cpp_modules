/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:36:23 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/21 15:38:57 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "Replace.hpp"

int main(int argc, char **argv)
{
	Replace	rep(argv, argc);
	rep.changeStringInFile();
	return (0);
}
