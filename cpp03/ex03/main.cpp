/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:11:47 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 00:43:54 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	a("Alice");
	DiamondTrap	b("Bob");
	DiamondTrap	c(a);

	c = b;
	b.attack(a);
	b.highFivesGuys();
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
}