/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:38:55 by yfoucade          #+#    #+#             */
/*   Updated: 2022/10/31 16:17:06 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		void	setName( std::string name);

	private:
		std::string _name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif /* ZOMBIE_HPP */