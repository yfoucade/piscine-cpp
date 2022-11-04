/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:27:15 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 00:45:06 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		DiamondTrap( void );

	public:
		DiamondTrap( const std::string & name );
		DiamondTrap( const DiamondTrap & other );
		DiamondTrap& operator=(const DiamondTrap & other );
		~DiamondTrap();
		void	whoAmI( void );
		void	attack( ScavTrap& target );
};
