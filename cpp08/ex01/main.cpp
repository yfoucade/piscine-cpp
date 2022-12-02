/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:15:06 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/02 16:18:41 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Span.hpp"

int main()
{
	Span a(10);

	{
		std::cout << "=============" << '\n';
		std::cout << "=== EMPTY ===" << '\n';
		std::cout << "=============" << '\n';

		a.printSpan(); std::cout << '\n';
		try{
			std::cout << a.shortestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute shortestSpan " << '\n';
		}
		try{
			std::cout << a.longestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute longestSpan" << '\n';
		}
		std::cout << std::endl;
	}
	{
		std::cout << "==============" << '\n';
		std::cout << "=== SIZE 1 ===" << '\n';
		std::cout << "==============" << '\n';
		std::cout << "a.addNumber(1);\n";
		
		a.addNumber(1);
		a.printSpan(); std::cout << '\n';
		try{
			std::cout << a.shortestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute shortestSpan " << '\n';
		}
		try{
			std::cout << a.longestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute longestSpan" << '\n';
		}
		std::cout << std::endl;
	}
	{
		std::cout << "==============" << '\n';
		std::cout << "=== SIZE 2 ===" << '\n';
		std::cout << "==============" << '\n';
		std::cout << "a.addNumber(42);\n";
		
		a.addNumber(42);
		a.printSpan(); std::cout << '\n';
		try{
			std::cout << a.shortestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute shortestSpan " << '\n';
		}
		try{
			std::cout << a.longestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute longestSpan" << '\n';
		}
		std::cout << std::endl;
	}
	{
		std::cout << "======================" << '\n';
		std::cout << "=== ADD FROM ARRAY ===" << '\n';
		std::cout << "======================" << '\n';
		std::cout << "int myints[5] = {42, 1729, 123, -42, -666};\n";
		std::cout << "a.addRange(myints, myints + 5);\n";
		
		int	myints[5] = {42, 1729, 123, -42, -666};
		a.addRange(myints, myints + 5);
		a.printSpan(); std::cout << '\n';
		try{
			std::cout << a.shortestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute shortestSpan " << '\n';
		}
		try{
			std::cout << a.longestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute longestSpan" << '\n';
		}
		std::cout << std::endl;
	}
	{
		std::cout << "=======================" << '\n';
		std::cout << "=== ADD FROM VECTOR ===" << '\n';
		std::cout << "=======================" << '\n';
		std::cout << "std::vector<float> myfloats(2, 1.2);\n";
		std::cout << "a.addRange(myfloats.begin(), myfloats.end());\n";
		
		std::vector<float> myfloats(3, 1.2);
		a.addRange(myfloats.begin(), myfloats.end());
		a.printSpan(); std::cout << '\n';
		try{
			std::cout << a.shortestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute shortestSpan " << '\n';
		}
		try{
			std::cout << a.longestSpan() << '\n';
		}
		catch(std::exception& e){
			std::cout << "Couldn't compute longestSpan" << '\n';
		}
		std::cout << std::endl;
	}
	{
		std::cout << "================" << '\n';
		std::cout << "=== MAX SIZE ===" << '\n';
		std::cout << "================" << '\n';

		a.printSpan(); std::cout << '\n';
		try{
			std::cout << "Trying a.addNumber(42);" << '\n';
			a.addNumber(42);
		}
		catch(std::exception& e){
			std::cout << "Couldn't add number" << '\n';
		}
		std::cout << std::endl;
	}
	{
		std::cout << "=================" << '\n';
		std::cout << "=== HUGE SPAN ===" << '\n';
		std::cout << "=================" << '\n';

		Span bigspan(123456);
		srand(time(NULL));
		for (int i = 0; i < 123456; i++)
		{
			bigspan.addNumber(rand());
		}
		std::cout << bigspan.shortestSpan() << '\n';
		std::cout << bigspan.longestSpan() << '\n';
	}
}