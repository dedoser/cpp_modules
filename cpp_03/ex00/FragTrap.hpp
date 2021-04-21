/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 00:27:50 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 00:53:26 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap
{
private:
	int			HP;
	int			maxHP;
	int			energy;
	int			MaxEnergy;
	int			level;
	std::string	name;
	int			meleeDmg;
	int			rangedDmg;
	int			armor;
public:
	FragTrap(const std::string &name);
	~FragTrap();
	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(const std::string &target);
};

#endif
