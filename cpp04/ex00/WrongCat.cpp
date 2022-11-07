/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:28:37 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 13:15:00 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
}

WrongCat::WrongCat( std::string type ): WrongAnimal(type)
{
}

WrongCat::WrongCat( const WrongCat& other ): WrongAnimal(other)
{
}

WrongCat& WrongCat::operator=( const WrongCat& other )
{
	setType(other.getType());
	return *this;
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound( void ) const
{
	std::cout << "meow!" << std::endl;
}
