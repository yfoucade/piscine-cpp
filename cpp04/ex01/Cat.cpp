/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:48 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 11:21:32 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
}

Cat::Cat( std::string type ): Animal(type)
{
}

Cat::Cat( const Cat& other ): Animal(other)
{
}

Cat& Cat::operator=( const Cat& other )
{
	setType(other.getType());
	return *this;
}

Cat::~Cat()
{
}

void Cat::makeSound( void ) const
{
	std::cout << "meow!" << std::endl;
}