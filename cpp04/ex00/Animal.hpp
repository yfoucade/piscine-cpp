/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:53:01 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 11:13:59 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	private:
		std::string	_type;

	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal & other );
		Animal& operator=( const Animal & other );
		~Animal( void );
		std::string getType( void ) const;
		void setType( std::string type );
		virtual void makeSound( void ) const;
};

#endif /* ANIMAL_HPP */