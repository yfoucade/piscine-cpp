/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:56:19 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/29 12:46:34 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
void	swap( T & a, T & b )
{
	T c = a;
	a = b;
	b = c;
}

template < typename T >
T const & min( T const & a, T const & b )
{
	return ( (a < b) ? a : b );
}

template < typename T >
T const & max( T const & a, T const & b )
{
	return ( (a > b) ? a : b );
}