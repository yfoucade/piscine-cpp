/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:50:27 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/16 11:13:22 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		std::string const _target;
		bool _is_signed;
		int const _sign_grade;
		int const _exec_grade;
		Form( void );

	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};
		Form( std::string, std::string, int, int );
		Form( const Form& );
		Form& operator=( const Form& );
		virtual ~Form();
		std::string getName( void ) const;
		std::string getTarget( void ) const;
		bool getIsSigned( void ) const;
		int getSignGrade( void ) const;
		int getExecGrade( void ) const;
		void beSigned( const Bureaucrat& );
		void canExecute( const Bureaucrat& ) const;
		virtual void execute( const Bureaucrat& ) const = 0;
};

std::ostream& operator<<( std::ostream&, const Form& );