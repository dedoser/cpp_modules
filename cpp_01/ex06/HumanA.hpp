/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 21:53:22 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 21:58:37 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		weapon;
	std::string	name;
public:
	HumanA(std::string name, Weapon weapon);
	~HumanA();
	void	attack();
};
