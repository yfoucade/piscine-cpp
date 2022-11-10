/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:26:49 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/10 23:21:11 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type(std::string("Wrong generic animal"))
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): _type(type)
{
	std::cout << "WrongAnimal constructor from string called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & other ): _type(other._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal & other )
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << _type << ": Wrong generic animal sound" << std::endl;
}
