/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:36:38 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/10 08:25:01 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string & name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor from string for " << name << std::endl;
	set_name( name + "_clap_name" );
	this->_name = name;
	set_fragtrap_hit_points();
	set_scavtrap_energy_points();
	set_fragtrap_attack_damage();
}

DiamondTrap::DiamondTrap( const DiamondTrap & other ): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap copy constructor for " << other.get_name() << std::endl;
	this->_name = other._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & other )
{
	ClapTrap::operator=(other);
	this->_name = other._name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "name: " << this->_name << ", ClapTrap name: " << this->get_name() << std::endl;
}

void	DiamondTrap::attack(ScavTrap & target)
{
	ScavTrap::attack(target);
}
