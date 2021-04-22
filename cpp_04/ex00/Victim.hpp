/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:36:09 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/22 21:48:29 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
private:
	std::string	name;
public:
	Victim(const std::string &name);
	~Victim();
	const std::string	&getName() const;
	virtual void		getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &out, const Victim &vic);


#endif
