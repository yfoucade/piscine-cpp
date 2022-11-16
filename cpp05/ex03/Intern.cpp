/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:53:25 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/16 12:24:02 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern( const Intern& other )
{
	std::cout << "Intern copy constructor called" << std::endl;
	if ( this == &other )
		return ;
}

Intern& Intern::operator=( const Intern& other )
{
	std::cout << "Intern asignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	return *this;
}

Intern::~Intern( void )
{
	std::cout << "Intern destructor called" << std::endl;
}

Form* Intern::makeForm( std::string name, std::string target )
{
	int	idx = -1;
	std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
		if (!names[i].compare(name))
			idx = i;
	if ( idx != -1 )
		std::cout << "Intern creates " << name << std::endl;
	switch (idx)
	{
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			std::cout << "Unknown kind of form: " << name << std::endl;
			return NULL;
	}
}