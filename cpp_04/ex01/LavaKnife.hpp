/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LavaKnife.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:43:21 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/10 20:52:14 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAVAKNIFE_HPP
#define LAVAKNIFE_HPP

#include "AWeapon.hpp"
#include <string>

class LavaKnife : public AWeapon
{
public:
	LavaKnife();
	LavaKnife(const LavaKnife &obj);
	virtual ~LavaKnife();
	LavaKnife	&operator=(const LavaKnife &right);
	virtual void	attack() const;
};

#endif
