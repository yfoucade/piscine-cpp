/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:03:16 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/02 11:24:35 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
class Array
{
	private:
		unsigned int _size;
		T* _tab;

	public:
		Array( void ): _size(0), _tab(new T[0]) {}
		Array( unsigned int n ): _size(n), _tab(new T[n]){}
		Array( const Array& other ): _size(other._size), _tab(new T[other._size])
		{
			for (unsigned int i = 0; i < other._size; i++)
				_tab[i] = other._tab[i];
		}
		Array& operator=( const Array& other )
		{
			if (this == &other)
				return *this;
			delete [] _tab;
			_size = other._size;
			_tab = new T[_size];
			for (int i = 0; i < other._size; i++)
				_tab[i] = other._tab[i];
			return *this;
		}
		T& operator[]( unsigned int i )
		{
			if ( i >= _size )
				throw (std::exception());
			return _tab[i];
		}
		unsigned int size( void ) const { return _size; }
		~Array();
};

template < typename T >
Array<T>::~Array()
{
	delete [] _tab;
}
