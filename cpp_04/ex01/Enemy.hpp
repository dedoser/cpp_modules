/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:04:45 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/23 18:14:40 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
private:
	int			hp;
	std::string	type;
public:
	Enemy(int hp, const std::string &type);
	Enemy(const Enemy &obj);
	virtual ~Enemy();
	Enemy				&operator=(const Enemy &right);
	const std::string	&getType() const;
	int					getHP() const;
	virtual void		takeDamage(int damage);
};

#endif
