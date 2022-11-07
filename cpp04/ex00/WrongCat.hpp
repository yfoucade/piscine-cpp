/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:27:51 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 13:14:40 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string.h>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat( void );
		WrongCat( std::string type );
		WrongCat( const WrongCat& other );
		WrongCat& operator=( const WrongCat& other );
		~WrongCat( void );
		void makeSound( void ) const;
};

#endif /* WRONGCAT_HPP */