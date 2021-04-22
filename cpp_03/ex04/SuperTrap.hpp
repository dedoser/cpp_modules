/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:06:23 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 21:10:46 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &obj);
	~SuperTrap();
	SuperTrap	&operator=(const SuperTrap &right);
	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	unsigned int	getHP(void);
	unsigned int	getMaxHP(void);
	unsigned int	getEnergy(void);
	unsigned int	getMaxEnergy(void);
	unsigned int	getMeleeDmg(void);
	unsigned int	getRangedDmg(void);
	unsigned int	getArmor(void);
};

#endif
