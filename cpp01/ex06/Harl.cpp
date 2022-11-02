/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:19:30 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/02 13:56:03 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <algorithm>

Harl::Harl( void )
{
}

Harl::~Harl()
{
}

void	Harl::complain( std::string min_level, std::string level )
{
	int	min_idx;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (min_level == levels[i])
			min_idx = i;
	switch (min_idx)
	{
		case 0:
			if (level == "DEBUG")
				this->debug();
		case 1:
			if (level == "INFO")
				this->info();
		case 2:
			if (level == "WARNING")
				this->warning();
		case 3:
			if (level == "ERROR")
				this->error();
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
