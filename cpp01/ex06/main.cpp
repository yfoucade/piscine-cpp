/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:17:55 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/07 16:03:44 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl = Harl();

	if (ac > 2)
	{
		std::cout << "Usage: harlFilter min_level" << std::endl;
		return (1);
	}
	if (ac == 1)
		harl.complain("");
	else
		harl.complain(av[1]);
}