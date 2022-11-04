/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:48:20 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 00:20:33 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string & name ): ClapTrap(name)
{
	std::cout << "FragTrap constructor from string for " << name << std::endl;
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
}

FragTrap::FragTrap( FragTrap const & other ): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor for " << other.get_name() << std::endl;
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
}

FragTrap& FragTrap::operator=(FragTrap const & other )
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap assignment operator, lhs: " << this->get_name() \
		<< ", rhs: " << other.get_name() << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->get_name() << std::endl;
}

void FragTrap::attack( const std::string& target)
{
	if (get_energy_points())
	{
		std::cout << "FragTrap " << get_name() << " attacks " << target << ", causing "\
			<< get_attack_damage() << " points of damage!" << std::endl;
		set_energy_points(get_energy_points() - 1);
	}
}

void FragTrap::attack( FragTrap& target )
{
	if (get_energy_points() && get_hit_points() && target.get_hit_points())
	{
		std::cout << "FragTrap " << get_name() << " attacks " << target.get_name() << ", dealing "\
			<< get_attack_damage() << " points of damage!" << std::endl;
		set_energy_points(get_energy_points() - 1);
		target.takeDamage(get_attack_damage());
	}
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap: gimme a high five !!!" << std::endl;
}