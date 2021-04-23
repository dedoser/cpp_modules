/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:31:28 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/23 18:48:16 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
private:
	std::string	name;
	int			apoints;
	AWeapon		*weapon;
public:
	Character(const std::string	&name);
	Character(const Character &obj);
	~Character();
	Character			&operator=(const Character &right);
	void				recoverAP();
	void				equip(AWeapon *weapon);
	void				attack(Enemy *enemy);
	const std::string	&getName() const;
	int					getAP() const;
	const AWeapon		*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &out, const Character &ch);

#endif
