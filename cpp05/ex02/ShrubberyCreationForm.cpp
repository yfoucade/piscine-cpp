/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:38:52 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/16 12:22:01 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
Form("shrubbery creation", target, 145, 137)
{
	std::cout << "Shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ):
Form(other.getName(), other.getTarget(), 145, 137)
{
	std::cout << "Shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other)
{
	std::cout << "Shrubbery assignment operator called" << std::endl;
	std::cout << "Cannot use assignment operator on form" << std::endl;
	if ( this == &other )
		return *this;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}

const char* ShrubberyCreationForm::CannotOpenFileStreamException::what( void ) const throw()
{
	return "CannotOpenFileStreamException: Failed to open file";
}

void ShrubberyCreationForm::execute( const Bureaucrat& executor ) const
{
	canExecute(executor);
	std::ofstream ofs((getTarget() + "_shrubbery").c_str(), std::ios_base::app );
	if (!ofs)
		throw CannotOpenFileStreamException();
	ofs << "       _-_" << std::endl;
	ofs << "    /~~   ~~\\" << std::endl;
	ofs << " /~~         ~~\\" << std::endl;
	ofs << "{               }" << std::endl;
	ofs << " \\  _-     -_  /" << std::endl;
	ofs << "   ~  \\\\ //  ~" << std::endl;
	ofs << "_- -   | | _- _" << std::endl;
	ofs << "  _ -  | |   -_" << std::endl;
	ofs << "      // \\\\" << std::endl;
}
