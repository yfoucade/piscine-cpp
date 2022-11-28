/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:48:18 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/28 11:16:36 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <math.h>
#include "find_type.hpp"

void	ft_print_from_char(char c)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int> (c) << std::endl;
	std::cout << "float: " << static_cast<float> (c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double> (c) << ".0" << std::endl;
}

void	ft_print_from_int(std::string str)
{
	int i = std::atoi(str.c_str());

	if (i < 0 || i >= 128)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char> (i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << "float: " << static_cast<float> (i) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double> (i) << std::endl;
}

void	ft_print_from_float(std::string str)
{
	float f = std::strtof(str.c_str(), NULL);

	{
		if (std::isnan(f) || std::isinf(f) || f < 0 || f >= 128)
			std::cout << "char: impossible" << std::endl;
		else if (f < 32 || f >= 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char> (f) << std::endl;
	}
	{
		if (std::isnan(f) || std::isinf(f) || f + 1 <= std::numeric_limits<int>::min() || f - 1 >= std::numeric_limits<int>::max())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int> (f) << std::endl;
	}
	if (f == trunc(f))
	{
		std::cout << std::fixed << std::showpoint << std::setprecision(1);
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double> (f) << std::endl;
	}
	else
	{
		std::cout << "float: " << f << 'f'<< std::endl;
		std::cout << "double: " << static_cast<double> (f) << std::endl;
	}
}

void	ft_print_from_double(std::string str)
{
	double f = std::strtod(str.c_str(), NULL);

	{
		if (std::isnan(f) || std::isinf(f) || f < 0 || f >= 128)
			std::cout << "char: impossible" << std::endl;
		else if (f < 32 || f >= 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char> (f) << std::endl;
	}
	{
		if (std::isnan(f) || std::isinf(f) || f + 1 <= std::numeric_limits<int>::min() || f - 1 >= std::numeric_limits<int>::max())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int> (f) << std::endl;
	}
	if (f == trunc(f))
	{
		std::cout << std::fixed << std::showpoint << std::setprecision(1);
		std::cout << "float: " << static_cast<float> (f) << "f" << std::endl;
		std::cout << "double: " << f << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float> (f) << 'f'<< std::endl;
		std::cout << "double: " << f << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2 || !av[1][0])
	{
		std::cout << "Usage: 1 non-empty argument required: litteral (char, int, float, or double)" << std::endl;
		exit(1);
	}
	if (ft_ischar(av[1]))
		ft_print_from_char(av[1][0]);
	else if (ft_isint(av[1]))
		ft_print_from_int(av[1]);
	else if (ft_isfloat(av[1]))
		ft_print_from_float(av[1]);
	else if (ft_isdouble(av[1]))
		ft_print_from_double(av[1]);
	else
		std::cout << "Unknown litteral format" << std::endl;
}
