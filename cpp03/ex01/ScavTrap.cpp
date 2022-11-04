/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:47:00 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 00:18:06 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string const & name ): ClapTrap(name)
{
	std::cout << "ScavTrap called constructor from string for " << name << std::endl;
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
}

ScavTrap::ScavTrap( ScavTrap const & other ): ClapTrap(other)
{
	std::cout << "ScavTrap called copy constructor for " << other.get_name() << std::endl;
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
}

ScavTrap& ScavTrap::operator=(ScavTrap const & other )
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap called assignment operator, lhs: " << this->get_name() \
		<< ", rhs: " << other.get_name() << std::endl;
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap called destructor for " << this->get_name() << std::endl;
}

void ScavTrap::attack( const std::string& target)
{
	if (get_energy_points())
	{
		std::cout << "ScavTrap " << get_name() << " attacks " << target << ", causing "\
			<< get_attack_damage() << " points of damage!" << std::endl;
		set_energy_points(get_energy_points() - 1);
	}
}

void ScavTrap::attack( ScavTrap& target )
{
	if (get_energy_points() && get_hit_points() && target.get_hit_points())
	{
		std::cout << "ScavTrap " << get_name() << " attacks " << target.get_name() << ", dealing "\
			<< get_attack_damage() << " points of damage!" << std::endl;
		set_energy_points(get_energy_points() - 1);
		target.takeDamage(get_attack_damage());
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
