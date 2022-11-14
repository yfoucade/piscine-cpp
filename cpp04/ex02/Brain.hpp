/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:37:34 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/13 22:42:55 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain
{
	private:
		std::string	_ideas[100];
		int			_mask[100];

	public:
		Brain( void );
		Brain( const Brain& other );
		Brain& operator=( const Brain& other );
		~Brain( void );
		void	addIdea( int i, std::string idea);
		void	delIdea( int i );
		void	printIdeas( void );
		std::string& operator[]( int i );
};