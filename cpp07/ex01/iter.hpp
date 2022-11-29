/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:52:07 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/29 13:50:52 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T, typename U >
void	iter( T* tab, int size, U (*f)(T&) )
{
	if (!tab)
		return ;
	for (int i = 0; i < size; i++)
		f(tab[i]);
}
