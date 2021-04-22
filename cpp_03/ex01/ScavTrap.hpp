/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:04:49 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 16:13:35 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
private:
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
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &obj);
	~ScavTrap();
	ScavTrap	&operator=(const ScavTrap &right);
	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(const std::string &target);
};


#endif
