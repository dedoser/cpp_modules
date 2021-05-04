/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:53:08 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/05 00:49:14 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <stack>

template<class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack	&operator=(const MutantStack &right)
	{
		this->c.operator=(right);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin() {return this->c.begin();}
	iterator	end() {return this->c.end();}
};
