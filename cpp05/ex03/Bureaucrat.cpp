/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:59:55 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/15 23:20:41 by yfoucade         ###   ########.fr       */
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

void Bureaucrat::signForm( Form& form ) const
{
	if (form.getIsSigned())
	{
		std::cout << _name << " couldn't sign " << form.getName()\
		<< " because it is already signed" << std::endl;
		return ;
	}
	try{
		form.beSigned( *this );
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch( Form::GradeTooLowException& e ){
		std::cout << _name << " couldn't sign " << form.getName()\
		<< " because its grade (" << _grade\
		<< ") is lower than the required grade (" << form.getSignGrade()\
		<< ")" << std::endl;
	}
}

/* ex02 */

void Bureaucrat::executeForm( const Form& form)
{
	try{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException& e){
		std::cout << _name << " has grade " << _grade \
		<< ", which is insufficient to execute form " << form.getName() \
		<< " (requires grade " << form.getExecGrade() << ")" << std::endl;
	}
	catch(Form::FormNotSignedException& e){
		std::cout << _name << " couldn't execute form " << form.getName() \
		<< " because it is not signed" << std::endl;
	}
	catch(std::exception& e){
		std::cout << _name << " couldn't execute form because: " << e.what() << std::endl;
	}
}