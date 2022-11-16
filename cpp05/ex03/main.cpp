/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:20:22 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/16 11:41:18 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <cstdlib>

void test_shrubbery( void )
{
	{
		std::cout << "===================" << std::endl;
		std::cout << "=== Cannot sign ===" << std::endl;
		std::cout << "===================" << std::endl;

		ShrubberyCreationForm a("test0");
		Bureaucrat b("Bob", 146);
		b.signForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
	{
		std::cout << "=============================" << std::endl;
		std::cout << "=== Can sign, not execute ===" << std::endl;
		std::cout << "=============================" << std::endl;

		ShrubberyCreationForm a("test1");
		Bureaucrat b("Bob", 138);
		b.signForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
	{
		std::cout << "============================" << std::endl;
		std::cout << "=== Can sign and execute ===" << std::endl;
		std::cout << "============================" << std::endl;

		ShrubberyCreationForm a("test2");
		Bureaucrat b("Bob", 137);
		b.signForm(a);
		b.executeForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
	{
		std::cout << "========================" << std::endl;
		std::cout << "=== Cannot open file ===" << std::endl;
		std::cout << "========================" << std::endl;

		system("rm -rf test3_shrubbery; touch test3_shrubbery; chmod 0 test3_shrubbery");
		ShrubberyCreationForm a("test3");
		Bureaucrat b("Bob", 137);
		b.signForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
}

void test_robotomy( void )
{
	srand(time(NULL));
	{
		std::cout << "===================" << std::endl;
		std::cout << "=== Cannot sign ===" << std::endl;
		std::cout << "===================" << std::endl;

		RobotomyRequestForm a("test0");
		Bureaucrat b("Bob", 73);
		b.signForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
	{
		std::cout << "=============================" << std::endl;
		std::cout << "=== Can sign, not execute ===" << std::endl;
		std::cout << "=============================" << std::endl;

		RobotomyRequestForm a("test1");
		Bureaucrat b("Bob", 46);
		b.signForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
	{
		std::cout << "============================" << std::endl;
		std::cout << "=== Can sign and execute ===" << std::endl;
		std::cout << "============================" << std::endl;

		RobotomyRequestForm a("test2");
		Bureaucrat b("Bob", 45);
		b.signForm(a);
		b.executeForm(a);
		b.executeForm(a);
		b.executeForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
}

void test_pardon( void )
{
	{
		std::cout << "===================" << std::endl;
		std::cout << "=== Cannot sign ===" << std::endl;
		std::cout << "===================" << std::endl;

		PresidentialPardonForm a("test0");
		Bureaucrat b("Bob", 73);
		b.signForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
	{
		std::cout << "=============================" << std::endl;
		std::cout << "=== Can sign, not execute ===" << std::endl;
		std::cout << "=============================" << std::endl;

		PresidentialPardonForm a("test1");
		Bureaucrat b("Bob", 6);
		b.signForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
	{
		std::cout << "============================" << std::endl;
		std::cout << "=== Can sign and execute ===" << std::endl;
		std::cout << "============================" << std::endl;

		PresidentialPardonForm a("test2");
		Bureaucrat b("Bob", 5);
		b.signForm(a);
		b.executeForm(a);
		b.executeForm(a);
	}
	std::cout << std::endl;
}

void test_intern( void )
{
	{
		std::cout << "====================" << std::endl;
		std::cout << "=== Unknown form ===" << std::endl;
		std::cout << "====================" << std::endl;

		Intern	alice;
		alice.makeForm("UnknownForm", "target1");
	}
	std::cout << std::endl;
	{
		std::cout << "=====================" << std::endl;
		std::cout << "=== ShrubberyForm ===" << std::endl;
		std::cout << "=====================" << std::endl;

		Intern alice;
		Form* f = alice.makeForm("ShrubberyCreationForm", "target1");
		std::cout << *f;
		std::cout << std::endl;
		Bureaucrat b("Bob", 150);
		b.signForm(*f);
		b.executeForm(*f);
		std::cout << std::endl;
		Bureaucrat c("Carol", 140);
		c.signForm(*f);
		c.executeForm(*f);
		std::cout << std::endl;
		Bureaucrat d("Dave", 1);
		d.signForm(*f);
		d.executeForm(*f);
		delete f;
	}
	std::cout << std::endl;
	{
		std::cout << "=======================" << std::endl;
		std::cout << "=== RobotomyRequest ===" << std::endl;
		std::cout << "=======================" << std::endl;

		Intern alice;
		Form* f = alice.makeForm("RobotomyRequestForm", "target1");
		std::cout << *f;
		std::cout << std::endl;
		Bureaucrat d("Dave", 1);
		d.signForm(*f);
		d.executeForm(*f);
		delete f;
	}
	std::cout << std::endl;
	{
		std::cout << "==========================" << std::endl;
		std::cout << "=== PresidentialPardon ===" << std::endl;
		std::cout << "==========================" << std::endl;

		Intern alice;
		Form* f = alice.makeForm("PresidentialPardonForm", "target1");
		std::cout << *f;
		std::cout << std::endl;
		Bureaucrat d("Dave", 1);
		d.signForm(*f);
		d.executeForm(*f);
		delete f;
	}
	std::cout << std::endl;
}

int main()
{
	// test_shrubbery();
	// test_robotomy();
	// test_pardon();
	test_intern();
}
