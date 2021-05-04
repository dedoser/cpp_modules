/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:55:53 by fignigno          #+#    #+#             */
/*   Updated: 2021/05/04 23:02:35 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(const T &cont, const int key)
{
	typename T::const_iterator	res;

	res = cont.begin();
	for (; res != cont.end(); ++res)
		if (*res == key)
			break ;
	return (res);
}
