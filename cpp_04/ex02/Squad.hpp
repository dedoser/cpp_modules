/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 00:58:22 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 01:22:47 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	ISpaceMarine	**group;
	int				count;
	void			increaseGroup();
public:
	Squad();
	Squad(const Squad &obj);
	virtual ~Squad();
	Squad			&operator=(const Squad &right);
	int				getCount() const;
	ISpaceMarine	*getUnit(int num) const;
	int				push(ISpaceMarine *marine);
};

#endif
