/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:48 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/13 22:43:08 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"), _brain(new Brain), _nb_ideas(0)
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
	this->_nb_ideas = other._nb_ideas;
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

std::string Cat::popIdea( void )
{
	std::string res;

	res = (*_brain)[_nb_ideas];
	(*_brain)[_nb_ideas--] = "";
	return res;
}
