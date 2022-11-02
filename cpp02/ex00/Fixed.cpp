/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:18 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/02 15:36:05 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _value(0)
{
}

Fixed::Fixed( const Fixed& other): _value(other.getRawBits())
{
}

Fixed&	Fixed::operator=( const Fixed& other)
{
	this->_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
	return this->_value;
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}