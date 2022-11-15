/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:09:52 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/15 23:15:34 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		RobotomyRequestForm( void );

	public:
		class OperationFailedException: public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};
		RobotomyRequestForm( std::string );
		RobotomyRequestForm( const RobotomyRequestForm& );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& );
		~RobotomyRequestForm();
		void execute( const Bureaucrat& ) const;
};
