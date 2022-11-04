/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:21:28 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 12:31:04 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_value;
	static const int	_point_pos = 8;

public:
	/* ex00 */
	Fixed( void );
	Fixed( const Fixed& other );
	Fixed& operator=( const Fixed& other);
	~Fixed( void );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	/* ex01 */
	Fixed( int const value );
	Fixed( float const value);
	float toFloat( void ) const;
	int toInt( void ) const;
	/* Friend keyword is forbidden */
	friend std::ostream & operator << (std::ostream &out, const Fixed &fixed);
	/* ex02 */
	/* REMOVE DEFINITIONS FROM THIS FILE */
	bool operator< ( const Fixed& other ) const { return this->_value <  other.getRawBits(); }
	bool operator> ( const Fixed& other ) const { return this->_value >  other.getRawBits(); }
	bool operator<=( const Fixed& other ) const { return this->_value <= other.getRawBits(); }
	bool operator>=( const Fixed& other ) const { return this->_value >= other.getRawBits(); }
	bool operator==( const Fixed& other ) const { return this->_value == other.getRawBits(); }
	bool operator!=( const Fixed& other ) const { return this->_value != other.getRawBits(); }
	Fixed operator+( const Fixed& other ) const { return Fixed(this->_value + other.getRawBits()); }
	Fixed operator-( const Fixed& other ) const { return Fixed(this->_value - other.getRawBits()); }
	Fixed& operator++( void ) { ++this->_value; return *this; }
	Fixed operator++( int ) { Fixed old = *this; ++this->_value; return old; }
	Fixed& operator--( void ) { --this->_value; return *this; }
	Fixed operator--( int ) { Fixed old = *this; --this->_value; return old; }
	Fixed operator*( const Fixed& other ) const;
	Fixed operator/( const Fixed& other ) const;
	static Fixed& min( Fixed& a, Fixed &b ) { if (a <= b) return a; return b; }
	static Fixed& max( Fixed& a, Fixed &b ) { if (a >= b) return a; return b; }
	static const Fixed& min( const Fixed& a, const Fixed &b ) { if (a <= b) return a; return b; }
	static const Fixed& max( const Fixed& a, const Fixed &b ) { if (a >= b) return a; return b; }
};

#endif /* FIXED_HPP */