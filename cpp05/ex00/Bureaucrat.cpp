/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:59:55 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 22:36:39 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if ( grade < 1 )
		throw GradeTooHighException();
	if (grade > 150 )
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ): _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other )
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "GradeTooHighException: grade number should be at least 1";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "GradeTooLowException: grade number should be at most 150";
}

std::string Bureaucrat::getName( void ) const
{
	return _name;
}

int Bureaucrat::getGrade( void ) const
{
	return _grade;
}

void Bureaucrat::upGrade( void )
{
	if ( _grade == 1 )
		throw GradeTooHighException();
	--_grade;
}

void Bureaucrat::downGrade( void )
{
	if ( _grade == 150 )
		throw GradeTooLowException();
	++_grade;
}

std::ostream& operator<<( std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return out;
}
