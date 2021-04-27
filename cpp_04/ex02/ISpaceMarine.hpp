/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 00:56:52 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 00:57:42 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine	*clone() const = 0;
	virtual void 			battleCry() const = 0;
	virtual void 			rangedAttack() const = 0;
	virtual void 			meleeAttack() const = 0;
};

#endif
