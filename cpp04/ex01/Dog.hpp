/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:05:24 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/12 12:18:30 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog( void );
		Dog( std::string type );
		Dog( const Dog& other );
		Dog& operator=( const Dog& other );
		virtual ~Dog( void );
		void makeSound( void ) const;
};

#endif /* DOG_HPP */