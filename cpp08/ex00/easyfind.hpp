/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:27:46 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/05 14:58:09 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iterator>

template < typename T >
typename T::iterator easyfind( T& container, const int val )
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

template < typename T >
typename T::const_iterator easyfind( const T& container, const int val )
{
	typename T::const_iterator ret;
	typename T::const_iterator end;

	if (container.size() == 0)
		throw(std::exception());
	end = container.end();
	for (ret = container.begin(); *ret != val && ret != end; ++ret)
		;
	return ret;
}