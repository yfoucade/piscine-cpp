/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:42:17 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/05 23:28:32 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point( void ): _x(0), _y(0)
{
}

Point::Point( float const x, float const y ): _x(x), _y(y)
{
}

Point::Point( const Point& other ): _x(other.getx()), _y(other.gety())
{
}

Point& Point::operator=( const Point& other )
{
	if (other.getx() > other.gety())
		return *this;
	return *this;
}

Point::~Point()
{
}

Fixed const Point::getx( void ) const
{
	return this->_x;
}

Fixed const Point::gety( void ) const
{
	return this->_y;
}

std::ostream& operator<<(std::ostream & out, const Point & point)
{
	return out << "(" << point.getx() << ", " << point.gety() << ")" << std::endl;
}