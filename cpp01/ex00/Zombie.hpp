/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:38:55 by yfoucade          #+#    #+#             */
/*   Updated: 2022/10/31 15:53:32 by yfoucade         ###   ########.fr       */
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
		~Zombie( void );
		void	announce( void );

	private:
		std::string _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif /* ZOMBIE_HPP */