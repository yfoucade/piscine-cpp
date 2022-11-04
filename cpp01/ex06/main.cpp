/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:17:55 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/04 13:22:16 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl = Harl();

	if (ac < 2)
	{
		std::cout << "Usage: harlFilter min_level [levels...]" << std::endl;
		return (1);
	}
	if (std::string("DEBUG") != av[1] && std::string("INFO") != av[1]
		&& std::string("WARNING") != av[1] && std::string("ERROR") != av[1])
	{
		std::cout << "Invalid min_level argument: use one of DEBUG, INFO, WARNING, and ERROR" << std::endl;
		return (1);
	}
	for (int i = 2; i < ac; i++)
		harl.complain(av[1], av[i]);
}