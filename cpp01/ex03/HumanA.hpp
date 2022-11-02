/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:30:11 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/01 11:53:25 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		_weapon;
		std::string	_name;

	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA();
		void	attack( void ) const;
};

#endif /* HUMANA_HPP */