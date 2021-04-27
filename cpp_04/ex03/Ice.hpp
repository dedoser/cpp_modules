/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:52:10 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 19:39:37 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <string>

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &obj);
	virtual ~Ice() {}
	virtual AMateria	*clone() const;
	virtual void		use(ICharacter &target);
};

#endif
