/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:15:07 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/28 11:15:24 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find_type.hpp"

bool	ft_ischar(std::string str)
{
	if (str.length() != 1)
	{
		return false;
	}
	if ('0' <= str[0] && str[0] <= '9')
	{
		return false;
	}
	return true;
}

bool	ft_isint(std::string str)
{
	int	i = 0;

	if (str[i] == '+' || str[i] == '-')
		++i;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
		++i;
	}
	return true;
}

bool	ft_isfloat(std::string str)
{
	int	i = 0;

	if (str == "nanf" || str == "-inff" || str == "+inff")
		return true;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while ('0' <= str[i] && str[i] <= '9')
		++i;
	if (str[i] == '.')
		++i;
	while ('0' <= str[i] && str[i] <= '9')
		++i;
	return (str[i] == 'f');
}

bool	ft_isdouble(std::string str)
{
	int	i = 0;

	if (str == "nan" || str == "-inf" || str == "+inf")
		return true;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while ('0' <= str[i] && str[i] <= '9')
		++i;
	if (str[i] == '.')
		++i;
	while ('0' <= str[i] && str[i] <= '9')
		++i;
	return (!str[i]);
}
