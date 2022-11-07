/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:18 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 18:20:20 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

/* ex00 */

const int Fixed::_point_pos = 8;

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

bool Fixed::operator< ( const Fixed& other ) const
{
	return this->_value <  other.getRawBits();
}

bool Fixed::operator> ( const Fixed& other ) const
{
	return this->_value >  other.getRawBits();
}

bool Fixed::operator<=( const Fixed& other ) const
{
	return this->_value <= other.getRawBits();
}

bool Fixed::operator>=( const Fixed& other ) const
{
	return this->_value >= other.getRawBits();
}

bool Fixed::operator==( const Fixed& other ) const
{
	return this->_value == other.getRawBits();
}

bool Fixed::operator!=( const Fixed& other ) const
{
	return this->_value != other.getRawBits();
}

Fixed Fixed::operator+( const Fixed& other ) const
{
	return Fixed(this->_value + other.getRawBits());
}

Fixed Fixed::operator-( const Fixed& other ) const
{
	return Fixed(this->_value - other.getRawBits());
}

Fixed& Fixed::operator++( void )
{
	++this->_value;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed old = *this;
	++this->_value;
	return old;
}

Fixed& Fixed::operator--( void )
{
	--this->_value;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed old = *this;
	--this->_value;
	return old;
}

Fixed Fixed::operator*( const Fixed& other ) const 
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/( const Fixed& other ) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::min( Fixed& a, Fixed &b )
{
	if (a <= b)
		return a;
	return b;
}

Fixed& Fixed::max( Fixed& a, Fixed &b )
{
	if (a >= b)
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed& a, const Fixed &b )
{
	if (a <= b)
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed& a, const Fixed &b )
{
	if (a >= b)
		return a;
	return b;
}
