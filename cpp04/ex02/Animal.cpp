/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:59:39 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/11 00:36:29 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ): _type(std::string("Generic animal"))
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ): _type(type)
{
	std::cout << "Animal constructor from string called" << std::endl;
}

Animal::Animal( const Animal & other ): _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=( const Animal & other )
{
	std::cout << "Animal assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	this->_type = other._type;
	return *this;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound( void ) const
{
	std::cout << _type << ": Generic animal sound" << std::endl;
}