/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:21:28 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 12:30:53 by yfoucade         ###   ########.fr       */
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
};

#endif /* FIXED_HPP */