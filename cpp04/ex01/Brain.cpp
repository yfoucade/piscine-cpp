/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:27 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 13:53:57 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = std::string("");
}

Brain::Brain( const Brain& other )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.get_idea(i);
}

std::string	Brain::operator[]( int i )
{
	return 
}

std::string Brain::get_idea( int i ) const
{
	return this->ideas[i];
}
