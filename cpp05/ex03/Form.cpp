/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:30:56 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/15 13:43:50 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form( std::string name, std::string target, int sign_grade, int exec_grade ):
_name(name),
_target(target),
_is_signed(false),
_sign_grade(sign_grade),
_exec_grade(exec_grade)
{
	std::cout << "Form constructor called" << std::endl;
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form( const Form& other ):
_name(other._name),
_target(other._target),
_is_signed(other._is_signed),
_sign_grade(other._sign_grade),
_exec_grade(other._exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=( const Form& other )
{
	std::cout << "Form assignment operator called" << std::endl;
	if ( this == &other )
		return *this;
	_is_signed = other._is_signed;
	return *this;
}

Form::~Form( void )
{
	std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName( void ) const
{
	return _name;
}

std::string Form::getTarget( void ) const
{
	return _target;
}

bool Form::getIsSigned( void ) const
{
	return _is_signed;
}

int Form::getSignGrade( void ) const
{
	return _sign_grade;
}

int Form::getExecGrade( void ) const
{
	return _exec_grade;
}

void Form::beSigned( const Bureaucrat& bureaucrat)
{
	if ( bureaucrat.getGrade() > _sign_grade )
		throw GradeTooLowException();
	_is_signed = true;
}

std::ostream& operator<<( std::ostream& out, const Form& form )
{
	std::cout << "Info about form: " << form.getName() << std::endl;
	std::cout << "    target: " << form.getTarget() << std::endl;
	std::cout << "    min grade to sign: " << form.getSignGrade() << std::endl;
	std::cout << "    min grade to exec: " << form.getExecGrade() << std::endl;
	std::cout << "    is signed: " << form.getIsSigned() << std::endl;
	return out;
}

const char* Form::GradeTooHighException::what( void ) const throw()
{
	return "GradeTooHighException: grade number should be at least 1";
}

const char* Form::GradeTooLowException::what( void ) const throw()
{
	return "GradeTooLowException: grade number should be at most 150";
}

/* ex02 */

const char* Form::FormNotSignedException::what( void ) const throw()
{
	return "FormNotSignedException: the form has not been signed";
}

void Form::canExecute( const Bureaucrat& executor ) const
{
	if ( !_is_signed )
		throw FormNotSignedException();
	if ( executor.getGrade() > _exec_grade )
		throw GradeTooLowException();
}
