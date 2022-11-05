/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:27:27 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/05 13:18:01 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace_content( std::string str, std::string s1, std::string s2 )
{
	std::size_t	i, j = 0;

	if (s1 == s2)
		return (str);
	while ((i = str.find(s1, j)) != std::string::npos)
	{
		str.erase(i, s1.size());
		str.insert(i, s2);
		j = i + s2.size();
	}
	return str;
}

std::string	get_content( std::ifstream& ifs )
{
	std::string	res;
	char		c;
	
	while ((c = ifs.get()))
	{
		if (!ifs)
			break ;
		res += c;
	}
	return (res);
}

void	ft_replace( std::ifstream& ifs, std::ofstream& ofs, std::string s1, std::string s2 )
{
	std::string	str;

	str = get_content(ifs);
	ifs.close();
	str = replace_content(str, s1, s2);
	ofs << str;
	ofs.close();
}

int	main( int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: sifl filename s1 s2" << std::endl;
		return (1);
	}
	if (!av[2][0])
	{
		std::cout << "Error: s1 cannot be the empty string" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs)
	{
		std::cout << "Error: could not open file " << av[1] << std::endl;
		return (1);
	}
	std::ofstream	ofs((std::string(av[1]) + ".replace").data());
	if (!ofs)
	{
		std::cout << "Error: could not open file " << av[1] << ".replace" << std::endl;
		return (1);
	}
	ft_replace(ifs, ofs, av[2], av[3]);
	return (0);
}