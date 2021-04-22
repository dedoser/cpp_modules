/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 00:27:50 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 16:09:14 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap
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
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &obj);
	~FragTrap();
	FragTrap	&operator=(const FragTrap &right);
	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(const std::string &target);
};

#endif
