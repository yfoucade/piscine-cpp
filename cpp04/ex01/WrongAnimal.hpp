/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:51 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 11:28:57 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	private:
		std::string	_type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal & other );
		WrongAnimal& operator=( const WrongAnimal & other );
		~WrongAnimal( void );
		std::string getType( void ) const;
		void setType( std::string type );
		void makeSound( void ) const;
};

#endif /* WRONGANIMAL_HPP */