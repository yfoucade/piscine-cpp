/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:11 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/12 12:57:19 by yfoucade         ###   ########.fr       */
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
		int		_nb_ideas;

	public:
		Cat( void );
		Cat( const Cat& other );
		Cat& operator=( const Cat& other );
		virtual ~Cat( void );
		void makeSound( void ) const;
		void printIdeas( void ) const;
		void addIdea( std::string idea );
		std::string popIdea( void );
};

#endif /* CAT_HPP */