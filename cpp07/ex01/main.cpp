/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:51:35 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/29 13:51:24 by yfoucade         ###   ########.fr       */
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
	return (point.getX() >= 0 && point.getY() >= 0);
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
		Point points[2] = { Point(), Point(3.14, 1729.0) };
		iter<Point, void>( points, 2, ft_print );
		iter<Point, bool>( points, 2, ft_is_north_east );
	}
}
