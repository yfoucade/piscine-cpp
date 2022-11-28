/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:09:52 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/16 00:02:55 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		PresidentialPardonForm( void );

	public:
		PresidentialPardonForm( std::string );
		PresidentialPardonForm( const PresidentialPardonForm& );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& );
		~PresidentialPardonForm();
		void execute( const Bureaucrat& ) const;
};
