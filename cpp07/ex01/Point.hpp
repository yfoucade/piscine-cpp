/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:28:38 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/29 13:35:23 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Point
{
	private:
		float _x;
		float _y;

	public:
		Point( void );
		Point( float, float );
		~Point( void ){}
		float getX( void ) const;
		float getY( void ) const;
};

std::ostream& operator<<( std::ostream&, const Point& );