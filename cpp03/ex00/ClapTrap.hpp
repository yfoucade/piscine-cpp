/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:54:12 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/06 15:32:35 by yfoucade         ###   ########.fr       */
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
};

#endif /* CLAPTRAP_HPP*/