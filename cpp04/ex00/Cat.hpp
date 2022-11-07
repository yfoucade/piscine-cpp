/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:11 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 11:28:21 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string.h>
#include "Animal.hpp"

class Cat: public Animal
{
	private:

	public:
		Cat( void );
		Cat( std::string type );
		Cat( const Cat& other );
		Cat& operator=( const Cat& other );
		~Cat( void );
		void makeSound( void ) const;
};

#endif /* CAT_HPP */