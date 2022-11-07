/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:21:28 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 18:13:34 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_value;
	static const int	_point_pos;

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
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif /* FIXED_HPP */