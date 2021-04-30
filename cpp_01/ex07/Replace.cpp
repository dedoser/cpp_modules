/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:03:05 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/30 15:11:39 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(char **argv, int argc)
{
	is_ok = true;
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments\n";
		is_ok = false;
		return ;
	}
	s1 = std::string(argv[2]);
	s2 = std::string(argv[3]);
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Can't open file " << argv[1] << std::endl;
		is_ok = false;
		return ;
	}
	out.open(std::string(argv[1]) + ".replace");
	if (!out.is_open())
	{
		std::cout << "Can't create file " << argv[1] << ".reaplce\n";
		is_ok = false;
		return ;
	}
}

std::string	replaceStrings
	(std::string &str, const std::string &s1, const std::string &s2)
{
	size_t	i;

	i = 0;
	if (s1 == s2)
		return (str);
	while (i != str.npos)
	{
		i = str.find(s1);
		if (i != str.npos)
			str.replace(i, s2.length(), s2);
	}
	return (str);
}

void	Replace::changeStringInFile()
{
	std::string	str;

	if (!this->is_ok)
		return ;
	this->out << "";
	while (std::getline(file, str))
	{
		this->out << replaceStrings(str, this->s1, this->s2);
		if (!file.eof())
			this->out << "\n";
	}
}

Replace::~Replace()
{
	if (this->is_ok)
	{
		this->file.close();
		this->out.close();
	}	
}
