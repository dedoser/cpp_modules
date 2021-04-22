/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:25:44 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 21:08:58 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &obj);
	~NinjaTrap();
	NinjaTrap	&operator=(const NinjaTrap &right);
	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	ninjaShoebox(ClapTrap &clp);
	void	ninjaShoebox(FragTrap &clp);
	void	ninjaShoebox(NinjaTrap &clp);
	void	ninjaShoebox(ScavTrap &clp);
};

#endif
