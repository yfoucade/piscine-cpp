/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:19:30 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 16:02:35 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
}

Harl::~Harl()
{
}

void	Harl::complain( std::string min_level )
{
	int	min_idx = -1;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (min_level == levels[i])
			min_idx = i;
	switch (min_idx)
	{
		case 0:
			this->debug();
			__attribute__ ((fallthrough));
		case 1:
			this->info();
			__attribute__ ((fallthrough));
		case 2:
			this->warning();
			__attribute__ ((fallthrough));
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::debug( void )
{
	std::cout << "Debug: this is a debug message" << std::endl;
}

void Harl::info( void )
{
	std::cout << "Info: this is an info message" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Warning: this is a warning message" << std::endl;
}

void Harl::error( void )
{
	std::cout << "Error: this is an error message" << std::endl;
}
