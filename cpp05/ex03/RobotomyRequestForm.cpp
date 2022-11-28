/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:38:52 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/16 12:23:11 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ):
Form("robotomy request", target, 72, 45)
{
	std::cout << "Robotomy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ):
Form(other.getName(), other.getTarget(), 72, 45)
{
	std::cout << "Robotomy copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other)
{
	std::cout << "Robotomy assignment operator called" << std::endl;
	std::cout << "Cannot use assignment operator on form" << std::endl;
	if ( this == &other )
		return *this;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

const char* RobotomyRequestForm::OperationFailedException::what( void ) const throw()
{
	return "Operation Failed";
}

void RobotomyRequestForm::execute( const Bureaucrat& executor ) const
{
	canExecute(executor);
	std::cout << "rizzz, bzzzzz..." << std::endl;
	if (rand() % 100 < 50)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
	{
		std::cout << "Operation failed" << std::endl;
		throw OperationFailedException();
	}
}
