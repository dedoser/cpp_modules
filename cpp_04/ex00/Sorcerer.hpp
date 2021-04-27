/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:23:38 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 00:27:55 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string	name;
	std::string	title;
public:
	Sorcerer();
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &obj);
	~Sorcerer();
	Sorcerer			&operator=(const Sorcerer &right);
	const std::string	&getName() const;
	const std::string	&getTitle() const;
	void				polymorph(const Victim &vic) const;
};

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sor);

#endif
