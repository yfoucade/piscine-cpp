/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:18 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/02 17:44:19 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

/* ex00 */

Fixed::Fixed( void ): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other): _value(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=( const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_point_pos;
}

Fixed::Fixed( float const value)
{
	std::cout << "Float constructor called" << std::endl;
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
