/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:48:04 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 01:10:25 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	private:
		FragTrap( void );

	public:
		FragTrap( const std::string & name );
		FragTrap( FragTrap const & other );
		FragTrap& operator=(FragTrap const & other );
		~FragTrap( void );
		void attack( const std::string& target );
		void attack( FragTrap& target );
		void set_fragtrap_hit_points( void );
		void set_fragtrap_energy_points( void );
		void set_fragtrap_attack_damage( void );
		void highFivesGuys( void );
};
