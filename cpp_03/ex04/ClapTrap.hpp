																								/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:16:06 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 16:47:06 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	unsigned int	HP;
	unsigned int	maxHP;
	unsigned int	energy;
	unsigned int	MaxEnergy;
	unsigned int	level;
	std::string	name;
	unsigned int	meleeDmg;
	unsigned int	rangedDmg;
	unsigned int	armor;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &obj);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap &right);
	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
