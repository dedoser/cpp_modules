/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:25:27 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:38:54 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <string>

class TacticalMarine : public ISpaceMarine
{
private:
	std::string	name;
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &obj);
	~TacticalMarine();
	TacticalMarine	&operator=(const TacticalMarine &right);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif
