/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:32:37 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/05 23:24:16 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int main( void )
{
	Point	a(0,0), b(0,4), c(4,0);
	Point	x1(1,1), x2(2,0), x3(2,1), x4(2,2), x5(-1, 1);
	bool	b1, b2, b3, b4, b5;

	b1 = bsp( a, b, c, x1);
	b2 = bsp( a, b, c, x2);
	b3 = bsp( a, b, c, x3);
	b4 = bsp( a, b, c, x4);
	b5 = bsp( a, b, c, x5);

	std::cout << b1 << b2 << b3 << b4 << b5 << std::endl;
}
