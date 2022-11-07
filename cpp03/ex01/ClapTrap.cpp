/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:55:12 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 18:49:16 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap called constructor from string for " << name << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & other ): _name(other._name)
{
	std::cout << "ClapTrap called copy constructor for " << other._name << std::endl;
}

ClapTrap& ClapTrap::operator=( ClapTrap const & other )
{
	std::cout << "ClapTrap called assignment operator, lhs: " << this->_name << ", rhs: " << other._name << std::endl;
	this->_name = other._name;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	this->_hit_points = other._hit_points;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap called destructor for " << this->_name << std::endl;
}

void ClapTrap::attack( const std::string& target)
{
	if (this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "\
			<< this->_attack_damage << " points of damage!" << std::endl;
		--this->_energy_points;
	}
}

void ClapTrap::attack( ClapTrap& target )
{
	if (this->_energy_points && this->_hit_points && target._hit_points)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target._name << ", dealing "\
			<< this->_attack_damage << " points of damage!" << std::endl;
		--this->_energy_points;
		target.takeDamage(this->_attack_damage);
	}
}

void ClapTrap::takeDamage( unsigned int amount )
{
	this->_hit_points = std::max(int(this->_hit_points - amount), 0);
	std::cout << "ClapTrap " << this->_name << " takes " << amount \
		<< " points of damage, " << this->_hit_points << " hit points left." << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energy_points && this->_hit_points)
	{
		this->_hit_points += amount;
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " has been repaired. It now has "\
			<< this->_hit_points << " hit points." << std::endl;
	}
}

void ClapTrap::set_name( std::string name )
{
	this->_name = name;
}

void ClapTrap::set_hit_points( int hit_points )
{
	this->_hit_points = hit_points;
}

void ClapTrap::set_energy_points( int energy_points)
{
	this->_energy_points = energy_points;
}

void ClapTrap::set_attack_damage( int attack_damage )
{
	this->_attack_damage = attack_damage;
}

std::string ClapTrap::get_name( void ) const
{
	return this->_name;
}

int ClapTrap::get_hit_points( void ) const
{
	return this->_hit_points;
}

int ClapTrap::get_energy_points( void ) const
{
	return this->_energy_points;
}
int ClapTrap::get_attack_damage( void ) const
{
	return this->_attack_damage;
}
