/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:21:28 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/05 23:09:54 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

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
		/* ex02 */
		bool operator< ( const Fixed& other ) const;
		bool operator> ( const Fixed& other ) const;
		bool operator<=( const Fixed& other ) const;
		bool operator>=( const Fixed& other ) const;
		bool operator==( const Fixed& other ) const;
		bool operator!=( const Fixed& other ) const;
		Fixed operator+( const Fixed& other ) const;
		Fixed operator-( const Fixed& other ) const;
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );
		Fixed operator*( const Fixed& other ) const;
		Fixed operator/( const Fixed& other ) const;
		static Fixed& min( Fixed& a, Fixed &b );
		static Fixed& max( Fixed& a, Fixed &b );
		static const Fixed& min( const Fixed& a, const Fixed &b );
		static const Fixed& max( const Fixed& a, const Fixed &b );
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif /* FIXED_HPP */