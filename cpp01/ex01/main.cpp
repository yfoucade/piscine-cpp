/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:47:29 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 15:35:18 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	int	N = 10;
	Zombie*	horde;

	horde = zombieHorde(N, "Yohan");
	if (horde)
		for (int i = 0; i < N; i++)
			horde[i].announce();
	delete [] horde;
}
