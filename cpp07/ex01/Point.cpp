/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:29:56 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/01 14:32:46 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Point::Point( void ): _x(0), _y(0){}

Point::Point( float x, float y ): _x(x), _y(y){}

float Point::getX( void ) const { return _x; }

float Point::getY( void ) const { return _y; }

std::ostream& operator<<( std::ostream& o, const Point& point )
{
	o << "(" << point.getX() << ", " << point.getY() << ")";
	return o;
}
