/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:54:12 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/06 15:37:46 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
private:
	std::string _name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
	ClapTrap( void );

public:
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & other );
	ClapTrap& operator=( ClapTrap const & other );
	~ClapTrap();
	void attack( const std::string& target );
	void attack( ClapTrap& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void set_name( std::string name );
	void set_hit_points( int hit_points );
	void set_energy_points( int energy_points );
	void set_attack_damage( int attack_damage );
	std::string get_name( void ) const;
	int get_hit_points( void ) const;
	int get_energy_points( void ) const;
	int get_attack_damage( void ) const;
};

#endif /* CLAPTRAP_HPP*/