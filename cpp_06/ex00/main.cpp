/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:30:39 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/30 19:34:55 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Converter.hpp"

int	main(int argc, char **argv)
{
	Converter conv(argv[1]);
	conv.convertAll();
}
