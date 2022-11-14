/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:48 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 10:36:52 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"), _brain(new Brain)
{
	std::cout << _type << " default constructor called" << std::endl;
}

Cat::Cat( const Cat& other ): Animal(other), _brain(new Brain)
{
	std::cout << _type << " copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=( const Cat& other )
{
	std::cout << _type << " assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	Animal::operator=(other);
	(*_brain) = *other._brain;
	return *this;
}

Cat::~Cat()
{
	std::cout << _type << " destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound( void ) const
{
	std::cout << _type << ": meow!" << std::endl;
}

void Cat::printIdeas( void ) const
{
	_brain->printIdeas();
}

void Cat::addIdea( int i, std::string idea ) 
{
	_brain->addIdea(i, idea);
}
