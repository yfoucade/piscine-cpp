/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:11:47 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/03 22:01:59 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	a("Alice");
	FragTrap	b("Bob");
	FragTrap	c(a);

	c = b;
	b.attack(a);
	b.highFivesGuys();
}