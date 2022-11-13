/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:37:34 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/11 11:24:31 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain( void );
		Brain( const Brain& other );
		Brain& operator=( const Brain& other );
		~Brain( void );
		std::string& operator[]( int i );
		std::string get_idea( int i ) const;
};