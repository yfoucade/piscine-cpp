/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:55 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 15:36:48 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ): _name(name)
{
	std::cout << this->_name << ": Comes back from the deads" << std::endl;
}

Zombie::Zombie( void )
{
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << ": Destroyed." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
