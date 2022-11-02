/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:19:30 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/02 12:57:10 by yfoucade         ###   ########.fr       */
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

void	Harl::complain( std::string level )
{
	int i = std::string("debug  info   warningerror  ").find(level);
	if (i==-1)
	{
		std::cout << "Unknown level of complaint" << std::endl;
		return ;
	}
	(this->*mem_fun_ptr[i / 7])();
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
