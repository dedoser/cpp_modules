/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:43:57 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/27 19:31:39 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string		name;
	AMateria		*inv[4];
	int				count;
public:
	Character();
	Character(const std::string &name);
	Character(const Character &obj);
	virtual ~Character();
	Character			&operator=(const Character &right);
	const std::string	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif
