/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:17:06 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/02 15:55:58 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>

class Span
{
	private:
		unsigned int _N;
		std::list<int> _list;
		Span();

	public:
		Span( unsigned int N );
		Span( const Span& );
		Span& operator=( const Span & );
		~Span();
		void addNumber( int n );
		unsigned int shortestSpan( void ) const;
		unsigned int longestSpan ( void ) const;
		void printSpan( void ) const;
		template < typename InputIterator >
		void addRange( InputIterator start, InputIterator end );
};

template < typename InputIterator >
void Span::addRange( InputIterator start, InputIterator end )
{
	while (_list.size() < _N && start != end)
		addNumber(*start++);
}
