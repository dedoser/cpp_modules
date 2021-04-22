/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:47:58 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 17:46:35 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	std::cout << "-------TESTING CREATION FRAGTRAPS-------" << std::endl;
	ScavTrap scav1("fignigno");
	ScavTrap scav2(scav1);
	ScavTrap scav3("qweqwe");
	scav3 = scav1;
	FragTrap frag1("kshantel");
	ClapTrap clap1("qwe");
	ClapTrap clap2(clap1);
	ClapTrap clap3 = clap2;
	NinjaTrap ninja1("Joske");
	NinjaTrap ninja2(ninja1);
	NinjaTrap ninja3("");
	ninja3 = ninja2;
	std::cout << "-------TESTING MELEEATTACK-------" << std::endl;
	scav1.meleeAttack("Afina");
	scav2.meleeAttack("Wihelm");
	scav3.meleeAttack("Nisha");
	frag1.meleeAttack("Jack");
	scav1.meleeAttack("Afina");
	scav2.meleeAttack("Wihelm");
	scav3.meleeAttack("Nisha");
	frag1.meleeAttack("Jack");
	clap1.meleeAttack("Afina");
	clap2.meleeAttack("Wihelm");
	clap3.meleeAttack("Nisha");
	ninja1.meleeAttack("Afina");
	ninja2.meleeAttack("Wihelm");
	ninja3.meleeAttack("Nisha");
	std::cout << "-------TESTING RANGEDATTACK-------" << std::endl;
	scav1.rangedAttack("Afina");
	scav2.rangedAttack("Wihelm");
	scav3.rangedAttack("Nisha");
	frag1.rangedAttack("Jack");
	scav1.rangedAttack("Afina");
	scav2.rangedAttack("Wihelm");
	scav3.rangedAttack("Nisha");
	frag1.rangedAttack("Jack");
	clap1.rangedAttack("Afina");
	clap2.rangedAttack("Wihelm");
	clap3.rangedAttack("Nisha");
	ninja1.rangedAttack("Afina");
	ninja2.rangedAttack("Wihelm");
	ninja3.rangedAttack("Nisha");
	std::cout << "-------TESTING TAKING DAMAGE-------" << std::endl;
	scav1.takeDamage(50);
	scav2.takeDamage(75);
	scav3.takeDamage(100);
	frag1.takeDamage(1);
	scav1.takeDamage(100);
	scav2.takeDamage(5);
	scav3.takeDamage(0);
	frag1.takeDamage(123456);
	clap1.takeDamage(50);
	clap2.takeDamage(75);
	clap3.takeDamage(100);
	ninja1.takeDamage(50);
	ninja2.takeDamage(75);
	ninja3.takeDamage(100);
	std::cout << "-------TESTING REPAIR-------" << std::endl;
	scav1.beRepaired(100);
	scav2.beRepaired(1);
	scav3.beRepaired(0);
	scav1.beRepaired(100);
	scav2.beRepaired(5);
	scav3.beRepaired(0);
	frag1.beRepaired(12456);
	frag1.beRepaired(1);
	clap1.beRepaired(100);
	clap2.beRepaired(5);
	clap3.beRepaired(0);
	ninja1.beRepaired(100);
	ninja2.beRepaired(5);
	ninja3.beRepaired(0);
	std::cout << "-------TESTING VAULTHUNTERDOT_EXE-------" << std::endl;
	frag1.vaulthunter_dot_exe("SC4V_TP");
	std::cout << "-------TESTING challengeNewcomer-------" << std::endl;
	scav1.challengeNewcomer("Davie504");
	scav2.challengeNewcomer("Naruto");
	scav3.challengeNewcomer("Saitama");
	std::cout << "-------TESTING ninjaShoebox-------" << std::endl;
	ninja1.ninjaShoebox(clap1);
	ninja1.ninjaShoebox(frag1);
	ninja1.ninjaShoebox(scav1);
}
