/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:27 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/12 12:40:22 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	_ideas[i] = std::string("");
}

Brain::Brain( const Brain& other )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=( const Brain& other )
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
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

std::string Brain::get_idea( int i ) const
{
	return _ideas[i];
}
