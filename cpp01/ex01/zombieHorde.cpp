/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:14:03 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 15:36:19 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie*	horde = new(std::nothrow) Zombie[N];

	if (!horde)
		return (NULL);
	while (N--)
		horde[N].setName(name);
	return horde;
}
