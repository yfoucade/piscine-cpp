/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:32:39 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/28 11:55:13 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data
{
	private:
		char _c;

	public:
		Data( void );
		Data( const Data& );
		Data& operator=( const Data& );
		~Data();
		void setC( char const );
		char getC( void ) const ;
};
