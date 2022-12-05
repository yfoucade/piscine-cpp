/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:03:02 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/05 12:08:20 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	{
		std::cout << "Create 'Array<int> numbers' and 'int* mirror'\n";
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		std::cout << "Initialize values\n";
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			std::cout << "Test copy constructor\n";
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		std::cout << "Check that values in 'numbers' and 'mirror' match\n";
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didny't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << "Values match\n";
		std::cout << "Numbers[-2]\n";
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "Numbers[MAX_VAL]\n";
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}

	{
		std::cout << "\nempty Array\n";
		Array<int> empty;
		std::cout << "empty[0]\n";
		try{
			empty[0] = 1;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << "\nNegative size\n";
		long a = -2147483648;
		long b = a + 10;
		std::cout << "long:\t\tArray(" << a+b << ")\n";
		std::cout << "unsigned int:\tArray(" << static_cast<unsigned int> (a+b) << ")\n";
		Array<float> f(a+b);
		try{
			std::cout << "f[9] = -1\n";
			f[9] = -1;
			std::cout << "Ok\n";
			std::cout << "f[10] = 42\n";
			f[10] = 42;
			std::cout << "Ok\n";
		}
		catch(const std::exception& e){
			std::cout << e.what() << '\n';
		}
		std::cout << f[0] << " ... " << f[8] << " " << f[9] << '\n';
	}

    return 0;
}
