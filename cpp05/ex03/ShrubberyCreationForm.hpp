/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:09:52 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/15 13:52:53 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		ShrubberyCreationForm( void );

	public:
		class CannotOpenFileStreamException: public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};
		ShrubberyCreationForm( std::string );
		ShrubberyCreationForm( const ShrubberyCreationForm& );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
		~ShrubberyCreationForm();
		void execute( const Bureaucrat& ) const;
};
