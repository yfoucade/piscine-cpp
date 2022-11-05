/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:38:21 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/05 23:27:49 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x, _y;

public:
	Point( void );
	Point( float const x, float const y );
	Point( const Point&  other );
	Point& operator=( const Point& other );
	~Point();
	Fixed const getx( void ) const;
	Fixed const gety( void ) const;
};

std::ostream& operator<<(std::ostream & out, const Point & point);