/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:27:27 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/02 08:14:45 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// read all file, char by char
// if (s1 == s2){return str;}
// use find, erase, and insert

void	ft_replace( std::ifstream& ifs, std::ofstream& ofs, std::string s1, std::string s2 )
{
	std::string	str = "";
	std::string	tmp;

	do //do not copy eof, add a check
	{
		str += ifs.get();
	} while (ifs);
	std::cout << str;
}

int	main( int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: sifl filename s1 s2" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs)
	{
		std::cout << "Error: could not open file " << av[1] << std::endl;
		return (EXIT_FAILURE);
	}
	std::ofstream	ofs(std::string(av[1]) + ".replace");
	if (!ofs)
	{
		std::cout << "Error: could not open file " << av[1] << ".replace" << std::endl;
		return (EXIT_FAILURE);
	}
	ft_replace(ifs, ofs, av[2], av[3]);
}