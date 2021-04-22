/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:47:58 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 16:50:32 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "-------TESTING CREATION FRAGTRAPS-------" << std::endl;
	ScavTrap scav1("fignigno");
	ScavTrap scav2(scav1);
	ScavTrap scav3 = scav1;
	FragTrap frag1("kshantel");
	std::cout << "-------TESTING MELEEATTACK-------" << std::endl;
	scav1.meleeAttack("Afina");
	scav2.meleeAttack("Wihelm");
	scav3.meleeAttack("Nisha");
	frag1.meleeAttack("Jack");
	scav1.meleeAttack("Afina");
	scav2.meleeAttack("Wihelm");
	scav3.meleeAttack("Nisha");
	frag1.meleeAttack("Jack");
	std::cout << "-------TESTING RANGEDATTACK-------" << std::endl;
	scav1.rangedAttack("Afina");
	scav2.rangedAttack("Wihelm");
	scav3.rangedAttack("Nisha");
	frag1.rangedAttack("Jack");
	scav1.rangedAttack("Afina");
	scav2.rangedAttack("Wihelm");
	scav3.rangedAttack("Nisha");
	frag1.rangedAttack("Jack");
	std::cout << "-------TESTING TAKING DAMAGE-------" << std::endl;
	scav1.takeDamage(50);
	scav2.takeDamage(75);
	scav3.takeDamage(100);
	frag1.takeDamage(1);
	scav1.takeDamage(100);
	scav2.takeDamage(5);
	scav3.takeDamage(0);
	frag1.takeDamage(123456);
	std::cout << "-------TESTING REPAIR-------" << std::endl;
	scav1.beRepaired(100);
	scav2.beRepaired(1);
	scav3.beRepaired(0);
	scav1.beRepaired(100);
	scav2.beRepaired(5);
	scav3.beRepaired(0);
	frag1.beRepaired(12456);
	frag1.beRepaired(1);
	std::cout << "-------TESTING VAULTHUNTERDOT_EXE-------" << std::endl;
	frag1.vaulthunter_dot_exe("SC4V_TP");
	std::cout << "-------TESTING challengeNewcomer-------" << std::endl;
	scav1.challengeNewcomer("Davie504");
	scav2.challengeNewcomer("Naruto");
	scav3.challengeNewcomer("Saitama");
}
