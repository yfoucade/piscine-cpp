/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:18:00 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 01:03:31 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	private:
		ScavTrap( void );

	public:
		ScavTrap( std::string const & name );
		ScavTrap( ScavTrap const & other );
		ScavTrap& operator=(ScavTrap const & other );
		~ScavTrap( void );
		void attack( const std::string& target );
		void attack( ScavTrap& target );
		void set_scavtrap_hit_points( void );
		void set_scavtrap_energy_points( void );
		void set_scavtrap_attack_damage( void );
		void	guardGate( void );
};