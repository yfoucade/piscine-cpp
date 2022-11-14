/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:20:22 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/15 00:31:53 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Form	*create_form(std::string name, int sign_grade, int exec_grade)
{
	Form *res = NULL;

	std::cout << "new Form(" << name << ", " << sign_grade << ", " << exec_grade << ")" << std::endl;
	try
	{
		res = new Form(name, sign_grade, exec_grade);
		std::cout << *res;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return res;
}

int main()
{
	{
		std::cout << "========================================" << std::endl;
		std::cout << "=== Form: invalid grade requirements ===" << std::endl;
		std::cout << "========================================" << std::endl;

		Form	*a = create_form("Form A", 0, 42);
		Form	*b = create_form("Form B", 151, 42);
		Form	*c = create_form("Form C", 42, 0);
		Form	*d = create_form("Form D", 42, 151);
		delete a, delete b, delete c, delete d;
		std::cout << std::endl;
	}
	{
		std::cout << "==============================" << std::endl;
		std::cout << "=== Form: copy constructor ===" << std::endl;
		std::cout << "==============================" << std::endl;

		Form	*a = create_form("Form A", 1, 150);
		Form	b(*a);
		std::cout << b;
		std::cout << "address of a: " << a << std::endl << "address of b: " << &b << std::endl;
		delete a;
	}
	std::cout << std::endl;
	{
		std::cout << "=========================" << std::endl;
		std::cout << "=== Form: Cannot sign ===" << std::endl;
		std::cout << "=========================" << std::endl;

		Form	*a = create_form("Form A", 42, 21);
		Bureaucrat b("Bob", 64);
		b.signForm(*a);
		std::cout << *a;
		delete a;
	}
	std::cout << std::endl;
	{
		std::cout << "===========================" << std::endl;
		std::cout << "=== Form: Can sign form ===" << std::endl;
		std::cout << "===========================" << std::endl;

		Form	*a = create_form("Form A", 42, 21);
		Bureaucrat b("Bob", 30);
		std::cout << "b.signForm(*a)" << std::endl;
		b.signForm(*a);
		std::cout << *a;
		std::cout << "b.signForm(*a)" << std::endl;
		b.signForm(*a);
		delete a;
	}
}
