/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:32:34 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/28 11:56:19 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ): _c('a')
{
}

Data::Data( const Data& other ): _c(other._c)
{
}

Data& Data::operator=( const Data& other )
{
	if (this == &other)
		return *this;
	_c = other._c;
	return *this;
}

Data::~Data()
{
}

void Data::setC( char const c )
{
	_c = c;
}

char Data::getC( void ) const
{
	return _c;
}
