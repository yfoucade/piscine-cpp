/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:33:27 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/02 18:53:56 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <stack>

template < typename T >
class MutantStack: public std::stack<T>
{
	private:

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack( void ){};
		MutantStack( const MutantStack& );
		MutantStack& operator=( const MutantStack& );
		~MutantStack(){};
		iterator begin()	{ return this->c.begin(); }
		iterator end()		{ return this->c.end();   }
		const_iterator begin() const	{ return this->c.begin(); }
		const_iterator end() const		{ return this->c.end();   }
		reverse_iterator rbegin()	{ return this->c.rbegin(); }
		reverse_iterator rend()		{ return this->c.rend();   }
		const_reverse_iterator rbegin() const	{ return this->c.rbegin(); }
		const_reverse_iterator rend() const		{ return this->c.rend();   }
};

template < typename T >
MutantStack<T>::MutantStack( const MutantStack& other ): std::stack<T>(other)
{}

template < typename T >
MutantStack<T>& MutantStack<T>::operator=( const MutantStack& other )
{
	std::stack<T>		*m1 = this;
	const std::stack<T>	*m2 = &other;

	if (m1 == m2)
		return *this;
	*m1 = *m2;
}