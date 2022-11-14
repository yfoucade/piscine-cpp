/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:53:01 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 11:00:24 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	private:

	protected:
		std::string	_type;

	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal & other );
		Animal& operator=( const Animal & other );
		virtual ~Animal();
		virtual void makeSound( void ) const = 0;
};

#endif /* ANIMAL_HPP */