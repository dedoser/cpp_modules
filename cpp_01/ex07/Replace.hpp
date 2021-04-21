/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:01:07 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/21 15:08:59 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>
#include <iostream>

class Replace
{
private:
	std::string		s1, s2;
	std::ofstream	out;
	std::ifstream	file;
	bool			is_ok;
public:
	Replace(char **argv, int argc);
	~Replace();
	void	changeStringInFile();
};

#endif
