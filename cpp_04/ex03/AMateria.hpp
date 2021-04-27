/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 00:56:09 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/26 01:02:51 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string		type;
	unsigned int	xp;
public:
	AMateria(const std::string &type);
	AMateria(const AMateria &obj);
	virtual ~AMateria();
	const std::string	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria	&clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif
