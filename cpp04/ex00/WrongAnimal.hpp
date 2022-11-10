/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:51 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/11 00:33:29 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	private:

	protected:
		std::string	_type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal & other );
		WrongAnimal& operator=( const WrongAnimal & other );
		virtual ~WrongAnimal( void );
		void makeSound( void ) const;
};

#endif /* WRONGANIMAL_HPP */