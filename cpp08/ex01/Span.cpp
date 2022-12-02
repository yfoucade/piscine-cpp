/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:34:46 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/02 15:59:17 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

Span::Span( unsigned int N ): _N(N)
{
}

Span::Span( const Span& other ): _N(other._N), _list(other._list)
{}

Span& Span::operator=( const Span& other )
{
	if (this == &other)
		return *this;
	_N = other._N;
	_list = other._list;
	return *this;
}

Span::~Span( void )
{}

void Span::addNumber( int n )
{
	if (_list.size() == _N)
		throw(std::exception());
	_list.insert(_list.end(), n);
}

unsigned int Span::shortestSpan( void ) const
{
	if (_list.size() < 2)
		throw(std::exception());
	std::list<int> tmp(_list);
	tmp.sort();
	int res = -1;
	std::list<int>::const_iterator curr = tmp.begin();
	std::list<int>::const_iterator next = tmp.begin();
	std::list<int>::const_iterator end = tmp.end();
	for (++next; next != end && res != 0; ++curr, ++next)
	{
		if (res == -1 || *next - *curr < res)
			res = *next - *curr;
	}
	return static_cast<unsigned int> (res);
}

unsigned int Span::longestSpan( void ) const
{
	if (_list.size() < 2)
		throw(std::exception());
	std::list<int> tmp(_list);
	tmp.sort();
	return *(--tmp.end()) - *tmp.begin();
}

void Span::printSpan( void ) const
{
	std::cout << "Span: ";
	if (_list.size() == 0)
	{
		std::cout << "Empty";
		return ;
	}
	std::list<int>::const_iterator it = _list.begin();
	std::list<int>::const_iterator end = _list.end();
	for ( ; it != end;)
		std::cout << *it << (++it == end ? "" : " ");
}

