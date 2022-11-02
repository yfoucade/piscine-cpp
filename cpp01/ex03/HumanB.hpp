/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:35:33 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/01 12:02:55 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		_weapon;
		std::string	_name;

	public:
		HumanB( std::string name );
		~HumanB();
		void	attack( void ) const;
		void	setWeapon( Weapon& weapon );
};

#endif /* HUMANB_HPP */