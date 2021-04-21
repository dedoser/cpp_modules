/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 00:52:53 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 01:15:25 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <fstream>
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "---------TESTING CREATION FRAGTRAPS---------" << std::endl;
	FragTrap frag1("Bot");
	FragTrap frag2(frag1);
	FragTrap frag3 = frag1;
	FragTrap frag4("Bomb");
	std::cout << "---------TESTING MELEEATTACK---------" << std::endl;
	frag1.meleeAttack("ClapTrap");
	frag2.meleeAttack("FRGTRP");
	frag3.meleeAttack("Echo");
	frag4.meleeAttack("ICANON");
	std::cout << "---------TESTING RANGEDATTACK---------" << std::endl;
	frag1.rangedAttack("ClapTrap");
	frag2.rangedAttack("FRGTRP");
	frag3.rangedAttack("Echo");
	frag4.rangedAttack("ICANON");
	std::cout << "---------TESTING TAKING DAMAGE---------" << std::endl;
	frag1.takeDamage(32);
	frag2.takeDamage(232323);
	frag3.takeDamage(23);
	frag4.takeDamage(1);
	std::cout << "---------TESTING REPAIR---------" << std::endl;
	frag1.beRepaired(50);
	frag2.beRepaired(75);
	frag3.beRepaired(100);
	frag4.beRepaired(0);
	std::cout << "---------TESTING VAULTHUNTERDOT_EXE---------" << std::endl;
	frag1.vaulthunter_dot_exe("Enemy");
	frag2.vaulthunter_dot_exe("Blight Bot");
	frag3.vaulthunter_dot_exe("Funzerking");
	frag4.vaulthunter_dot_exe("Mechromagician");
}
