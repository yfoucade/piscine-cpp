/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:16:12 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 19:11:40 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

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
};

std::ostream& operator<<( std::ostream&, Bureaucrat& );