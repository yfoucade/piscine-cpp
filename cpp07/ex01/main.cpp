/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:51:35 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/01 14:33:40 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include "Point.hpp"

template < typename T >
void ft_print( T& value )
{
	std::cout << value << std::endl;
}

template < typename T >
void ft_double( T& value )
{
	value *= 2;
}

bool ft_is_north_east( Point & point )
{
	bool res = point.getX() >= 0 && point.getY() >= 0;

	std::cout << "Point " << point << " is ";
	std::cout << (res ? "" : "not ") << "north-east" << std::endl;
	return res;
}

int main()
{
	{
		int	tab[3] = {1, 2, 3};
		
		iter<int, void>( tab, 3, ft_print );
		std::cout << std::endl;
		
		iter<int, void>( tab, 3, ft_double );
		
		iter<int, void>( tab, 3, ft_print );
		std::cout << std::endl;
	}
	
	{
		float tab[3] = {1, 2.2, 42};
		iter<float, void>( tab, 3, ft_print );
		std::cout << std::endl;
		
		iter<float, void>( tab, 3, ft_double );
		
		iter<float, void>( tab, 3, ft_print );
		std::cout << std::endl;
	}
	
	{
		Point points[3] = { Point(), Point(3.14, 1729.0), Point(-1, -1) };
		iter<Point, void>( points, 3, ft_print );
		std::cout << std::endl;
		iter<Point, bool>( points, 3, ft_is_north_east );
	}
}
