/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:59:39 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 11:14:24 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ): _type(std::string("Generic animal"))
{
}

Animal::Animal( std::string type ): _type(type)
{
}

Animal::Animal( const Animal & other ): _type(other.getType())
{
}

Animal& Animal::operator=( const Animal & other )
{
	this->_type = other.getType();
	return *this;
}

Animal::~Animal( void )
{
}

std::string Animal::getType( void ) const
{
	return this->_type;
}

void Animal::setType( std::string type )
{
	this->_type = type;
}

void Animal::makeSound( void ) const
{
	std::cout << "Generic animal sound" << std::endl;
}