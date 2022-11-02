/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:26:22 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/01 11:58:38 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType( void ) const
{
	return this->_type;
}

void	Weapon::setType( std::string new_type)
{
	this->_type = new_type;
}
