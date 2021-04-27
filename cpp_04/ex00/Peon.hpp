/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:44:44 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 00:31:10 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <string>

class Peon : public Victim
{
public:
	Peon();
	Peon(const std::string &name);
	Peon(const Peon &obj);
	virtual ~Peon();
	Peon			&operator=(const Peon &right);
	virtual void	getPolymorphed() const;
};

#endif
