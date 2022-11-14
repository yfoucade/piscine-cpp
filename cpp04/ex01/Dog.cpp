/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:08:28 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 10:53:47 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), _brain(new Brain)
{
	std::cout << _type << " default constructor called" << std::endl;
}

Dog::Dog( const Dog& other ): Animal(other), _brain(new Brain)
{
	std::cout << _type << " copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=( const Dog& other )
{
	std::cout << _type << " assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	Animal::operator=(other);
	(*_brain) = *other._brain;
	return *this;
}

Dog::~Dog()
{
	std::cout << _type << " destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound( void ) const
{
	std::cout << _type << ": woof!" << std::endl;
}

void Dog::printIdeas( void ) const
{
	_brain->printIdeas();
}

void Dog::addIdea( int i, std::string idea ) 
{
	_brain->addIdea(i, idea);
}
