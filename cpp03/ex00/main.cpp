/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:11:47 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/03 20:53:23 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Alice");
	ClapTrap	b("Bob");

	a.attack(b);
	b.attack(a);
	a.attack(b);
	b.beRepaired(20);
	b.attack(a);
}