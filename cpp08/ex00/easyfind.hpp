/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:27:46 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/30 18:37:17 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iterator>

template < typename T >
typename T::iterator easyfind( T& container, int val )
{
	typename T::iterator ret;
	typename T::iterator end;

	if (container.size() == 0)
		throw(std::exception());
	end = container.end();
	for (ret = container.begin(); *ret != val && ret != end; ++ret)
		;
	return ret;
}
