/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:48 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/10 22:54:37 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat& other ): Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
	std::cout << "Cat assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	this->_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << _type << ": meow!" << std::endl;
}