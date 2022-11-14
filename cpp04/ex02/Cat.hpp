/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:11 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 10:36:55 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat( void );
		Cat( const Cat& other );
		Cat& operator=( const Cat& other );
		virtual ~Cat( void );
		void makeSound( void ) const;
		void printIdeas( void ) const;
		void addIdea( int i, std::string idea );
};

#endif /* CAT_HPP */