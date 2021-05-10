/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lemon.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:58:23 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:41:12 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMON_HPP
#define LEMON_HPP

#include "Victim.hpp"
#include <string>

class Lemon : public Victim
{
public:
	Lemon(const std::string &name);
	Lemon(const Lemon &obj);
	virtual ~Lemon();
	Lemon	&operator=(const Lemon &right);
	virtual void	getPolymorphed() const;
};

#endif
