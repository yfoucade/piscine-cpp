/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:08:28 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/13 22:39:44 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), _brain(new Brain)
{
	std::cout << _type << " default constructor called" << std::endl;
}

Dog::Dog( const Dog& other ): Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	std::cout << "Dog assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	this->_type = other._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << _type << ": woof!" << std::endl;
}
