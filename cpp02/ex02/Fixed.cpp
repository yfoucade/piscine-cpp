/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:18 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/03 00:06:37 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

/* ex00 */

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

/* ex01 */

Fixed::Fixed( int const value )
{
	this->_value = value << this->_point_pos;
}

Fixed::Fixed( float const value)
{
	this->_value = roundf(value * (1 << this->_point_pos));
}

float Fixed::toFloat( void ) const
{
	return (this->_value / float(1 << this->_point_pos));
}

int Fixed::toInt( void ) const
{
	return this->_value >> this->_point_pos;
}

std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

/* ex02 */

Fixed Fixed::operator*( const Fixed& other ) const 
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/( const Fixed& other ) const
{
	return Fixed(this->toFloat() / other.toFloat());
}