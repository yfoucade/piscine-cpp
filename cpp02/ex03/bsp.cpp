/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:50:36 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/06 00:07:45 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

char	sign(Fixed f)
{
	char	res;

	if (f < 0)
		res = -1;
	else if (f > 0)
		res = 1;
	else
		res = 0;
	return res;
}

bool	f(Point const v1, Point const v2, Point const x1, Point const x2)
{
	float	alpha = v2.gety().toFloat() - v1.gety().toFloat();
	float	beta = v1.getx().toFloat() - v2.getx().toFloat();
	float	gamma = (v1.gety().toFloat() * v2.getx().toFloat()) - (v1.getx().toFloat() * v2.gety().toFloat());
	char	sign1 = sign((alpha * x1.getx().toFloat() + beta * x1.gety().toFloat() + gamma));
	char	sign2 = sign((alpha * x2.getx().toFloat() + beta * x2.gety().toFloat() + gamma));

	if (sign1 && sign1 == sign2)
		return true;
	return false;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	int	n = f(a, b, c, point) + f(a, c, b, point) + f(b, c, a, point);

	if (n != 3)
		return false;
	return true;
}