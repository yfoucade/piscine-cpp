/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:51:57 by yfoucade          #+#    #+#             */
/*   Updated: 2022/10/31 16:01:24 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie*	alice = newZombie("Alice");
	Zombie*	bob = newZombie("Bob");
	randomChump("Charlie");
	alice->announce();
	bob->announce();
	delete bob;
	delete alice;
}
