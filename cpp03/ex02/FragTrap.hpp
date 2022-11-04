/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:48:04 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 00:20:45 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
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
		void	highFivesGuys( void );
};
