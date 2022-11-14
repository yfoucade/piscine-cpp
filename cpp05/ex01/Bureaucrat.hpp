/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:16:12 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 23:48:33 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
		Bureaucrat( void );

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
		Bureaucrat( std::string name, int _grade );
		Bureaucrat( const Bureaucrat& );
		Bureaucrat& operator=( const Bureaucrat& );
		~Bureaucrat();
		std::string getName( void ) const;
		int getGrade( void ) const;
		void upGrade( void );
		void downGrade( void );
		void signForm( Form& form ) const;
};

std::ostream& operator<<( std::ostream&, const Bureaucrat& );