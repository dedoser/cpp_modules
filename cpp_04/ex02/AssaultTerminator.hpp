/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 02:32:15 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/24 02:38:21 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
#define ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <string>

class AssaultTerminator : public ISpaceMarine
{
private:
	std::string	name;
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &obj);
	~AssaultTerminator();
	AssaultTerminator	&operator=(const AssaultTerminator &right);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif
