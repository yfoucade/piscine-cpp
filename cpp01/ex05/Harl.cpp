/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:19:30 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/05 13:27:17 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <algorithm>

Harl::Harl( void )
{
	mem_fun_ptr[0] = &Harl::debug;
	mem_fun_ptr[1] = &Harl::info;
	mem_fun_ptr[2] = &Harl::warning;
	mem_fun_ptr[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*mem_fun_ptr[i])();
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
