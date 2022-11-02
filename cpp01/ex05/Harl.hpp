/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:18:46 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/02 12:55:54 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	private:
		void unknown( void );
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void (Harl::*mem_fun_ptr[4])( void ) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};

	public:
		Harl( void );
		~Harl();
		void complain( std::string level );
};

#endif /* HARL_HPP */