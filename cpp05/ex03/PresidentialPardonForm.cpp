/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:38:52 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/16 00:04:44 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
Form("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "Presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ):
Form(other.getName(), other.getTarget(), 25, 5)
{
	std::cout << "Presidential copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other)
{
	std::cout << "Presidential assignment operator called" << std::endl;
	std::cout << "Cannot use assignment operator on form" << std::endl;
	if ( this == &other )
		return *this;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential destructor called" << std::endl;
}

void PresidentialPardonForm::execute( const Bureaucrat& executor ) const
{
	canExecute(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
