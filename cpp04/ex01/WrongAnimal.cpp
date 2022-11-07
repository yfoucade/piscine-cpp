/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:26:49 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 11:27:38 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type(std::string("Wrong generic animal"))
{
}

WrongAnimal::WrongAnimal( std::string type ): _type(type)
{
}

WrongAnimal::WrongAnimal( const WrongAnimal & other ): _type(other.getType())
{
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal & other )
{
	this->_type = other.getType();
	return *this;
}

WrongAnimal::~WrongAnimal( void )
{
}

std::string WrongAnimal::getType( void ) const
{
	return this->_type;
}

void WrongAnimal::setType( std::string type )
{
	this->_type = type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong generic animal sound" << std::endl;
}
