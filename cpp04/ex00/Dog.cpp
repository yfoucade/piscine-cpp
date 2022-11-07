/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:08:28 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 11:19:01 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
}

Dog::Dog( std::string type ): Animal(type)
{
}

Dog::Dog( const Dog& other ): Animal(other)
{
}

Dog& Dog::operator=( const Dog& other )
{
	setType(other.getType());
	return *this;
}

Dog::~Dog()
{
}

void Dog::makeSound( void ) const
{
	std::cout << "woof!" << std::endl;
}
