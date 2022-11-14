/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:20:22 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 20:42:36 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat	*hire(std::string name, int grade)
{
	Bureaucrat *res = NULL;

	std::cout << "new Bureaucrat(" << name << ", " << grade << ")" << std::endl;
	try
	{
		res = new Bureaucrat(name, grade);
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
		std::cout << "=====================" << std::endl;
		std::cout << "=== Init Too High ===" << std::endl;
		std::cout << "=====================" << std::endl;

		Bureaucrat	*a = hire("Alice", 0);
		delete a;
		Bureaucrat	*b = hire("Bob", -42);
		delete b;
		std::cout << std::endl;
	}
	{
		std::cout << "=====================" << std::endl;
		std::cout << "=== Init Too Low  ===" << std::endl;
		std::cout << "=====================" << std::endl;

		Bureaucrat	*a = hire("Alice", 151);
		delete a;
		Bureaucrat	*b = hire("Bob", 1024);
		delete b;
		std::cout << std::endl;
	}
	{
		std::cout << "=====================" << std::endl;
		std::cout << "=== Init Succeeds ===" << std::endl;
		std::cout << "=====================" << std::endl;

		Bureaucrat	*a = hire("Alice", 1);
		delete a;
		Bureaucrat	*b = hire("Bob", 42);
		delete b;
		Bureaucrat	*c = hire("Charlie", 150);
		delete c;
		std::cout << std::endl;
	}
	{
		std::cout << "========================" << std::endl;
		std::cout << "=== Copy Constructor ===" << std::endl;
		std::cout << "========================" << std::endl;

		Bureaucrat	*a = hire("Alice", 42);
		Bureaucrat	b(*a);
		std::cout << b << std::endl;
		std::cout << "a->upGrade()" << std::endl;
		a->upGrade();
		std::cout << *a << std::endl;
		std::cout << b << std::endl;
		delete a;
	}
	std::cout << std::endl;
	{
		std::cout << "===========================" << std::endl;
		std::cout << "=== Assignment operator ===" << std::endl;
		std::cout << "===========================" << std::endl;
		
		Bureaucrat *a = hire("Alice", 42);
		Bureaucrat *b = hire("Bob", 101);

		*b = *a;
		std::cout << *a << *b;
		std::cout << "b->downGrade()" << std::endl;
		b->downGrade();
		std::cout << *a << *b;
		delete a, delete b;
		std::cout << std::endl;
	}
	{
		std::cout << "======================" << std::endl;
		std::cout << "=== Cannot upGrade ===" << std::endl;
		std::cout << "======================" << std::endl;
		
		Bureaucrat *a = hire("Alice", 2);

		try{
			std::cout << "a->upGrade()" << std::endl;
			a->upGrade();
			std::cout << *a;
		}
		catch( std::exception& e){
			std::cout << e.what() << std::endl;
		}
		try{
			std::cout << "a->upGrade()" << std::endl;
			a->upGrade();
			std::cout << *a;
		}
		catch( std::exception& e){
			std::cout << e.what() << std::endl;
		}
		std::cout << *a;
		delete a;
		std::cout << std::endl;
	}
	{
		std::cout << "========================" << std::endl;
		std::cout << "=== Cannot downGrade ===" << std::endl;
		std::cout << "========================" << std::endl;

		Bureaucrat *a = hire("Alice", 149);
		try{
			std::cout << "a->downGrade()" << std::endl;
			a->downGrade();
			std::cout << *a;
		}
		catch( std::exception& e){
			std::cout << e.what() << std::endl;
		}
		try{
			std::cout << "a->downGrade()" << std::endl;
			a->downGrade();
			std::cout << *a;
		}
		catch( std::exception& e){
			std::cout << e.what() << std::endl;
		}
		std::cout << *a;
		delete a;
		std::cout << std::endl;
	}
}