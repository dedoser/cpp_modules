/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:30:20 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/20 19:51:56 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string	name;
	std::string	type;
public:
	Zombie(std::string name, std::string type);
	Zombie(void);
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void);
};

#endif
