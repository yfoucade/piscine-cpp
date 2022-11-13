/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:27 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/13 22:43:01 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_mask[i] = 0;
}

Brain::Brain( const Brain& other )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = other._ideas[i];
		_mask[i] = other._mask[i];
	}
}

Brain& Brain::operator=( const Brain& other )
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = other._ideas[i];
		_mask[i] = other._mask[i];
	}
	return *this;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string& Brain::operator[]( int i )
{
	return _ideas[i];
}

void	Brain::addIdea( int i, std::string idea )
{
	if ( i < 0 || i > 99)
		std::cout << "Invalid index" << std::endl;
	else
	{
		_ideas[i] = idea;
		_mask[i] = 1;
	}
}

void	Brain::delIdea( int i )
{
	if ( i < 0 || i > 99)
		std::cout << "Invalid index" << std::endl;
	else
		_mask[i] = 0;
}

void	Brain::printIdeas( void )
{
	for (int i = 0; i < 100; i++)
	{
		if (_mask[i])
			std::cout << i << ": " << _ideas[i] << std::endl;
	}
}