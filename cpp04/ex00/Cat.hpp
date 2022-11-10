/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:20:11 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/11 00:40:17 by yfoucade         ###   ########.fr       */
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
		Cat( const Cat& other );
		Cat& operator=( const Cat& other );
		virtual ~Cat( void );
		void makeSound( void ) const;
};

#endif /* CAT_HPP */