/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Orc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:49:41 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:58:42 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORC_HPP
#define ORC_HPP

#include "Enemy.hpp"
#include <string>

class Orc : public Enemy
{
public:
	Orc();
	Orc(const Orc &obj);
	virtual ~Orc();
	Orc	&operator=(const Orc &right);
	virtual void	takeDamage(int damage);
};

#endif
