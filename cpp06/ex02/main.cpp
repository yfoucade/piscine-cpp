/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:55:01 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/28 16:44:10 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void )
{
	Base	*res;

	srand(time(NULL));
	std::cout << "Creating instance of class ";
	switch (rand() % 3)
	{
		case 0:
			std::cout << "A" << std::endl;
			res = new A;
			break;
		case 1:
			std::cout << "B" << std::endl;
			res = new B;
			break;
		case 2:
			std::cout << "C" << std::endl;
			res = new C;
			break;
	}
	return res;
}

void	identify( Base* p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "Found type A";
	if (dynamic_cast<B*>(p))
		std::cout << "Found type B";
	if (dynamic_cast<C*>(p))
		std::cout << "Found type C";
	std::cout << " using pointer" << std::endl;
}

void	identify( Base& p )
{
	try{
		dynamic_cast<A&>(p);
		std::cout << "Found type A";
	}catch(std::exception &c){}

	try{
		dynamic_cast<B&>(p);
		std::cout << "Found type B";
	}catch(std::exception &c){}

	try{
		dynamic_cast<C&>(p);
		std::cout << "Found type C";
	}catch(std::exception &c){}
	
	std::cout << " using reference" << std::endl;
}

int main( void )
{
	Base *base = generate();
	identify(base);
	identify(*base);
}