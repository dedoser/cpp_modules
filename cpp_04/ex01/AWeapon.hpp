/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:37:20 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/23 18:09:11 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
private:
	std::string	name;
	int			apcost;
	int			damage;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &obj);
	virtual	~AWeapon();
	AWeapon				&operator=(const AWeapon &right);
	int					getAPCost() const;
	int					getDamage() const;
	const std::string	&getName() const;
	virtual	void		attack() const = 0;
};

#endif
