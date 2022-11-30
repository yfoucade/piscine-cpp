/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:26:58 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/30 18:42:14 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

template <typename T>
void	run_test( T& container, int val )
{
	typename T::iterator ret;
	try{
		ret = easyfind(container, val);
	}
	catch(std::exception &e){
		std::cout << e.what() << " Empty container" << std::endl;
		return;
	}
	
	if (ret == container.end())
	{
		std::cout << "Did not find value " << val << " in container" << std::endl;
	}
	else
	{
		std::cout << "Found value " << val << " at position ";
		std::cout << std::distance(container.begin(), ret) << std::endl;
	}
}

int main()
{
	{
		std::cout << "==============" << std::endl;
		std::cout << "=== VECTOR ===" << std::endl;
		std::cout << "==============" << std::endl;

		{
			std::cout << std::endl;
			std::cout << "=== Empty vector ===" << std::endl;
			std::cout << std::endl;
			
			std::vector<int> a;
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 1024);
		}
		{
			std::cout << std::endl;
			std::cout << "=== Size 1 vector ===" << std::endl;
			std::cout << std::endl;

			std::vector<int> a(1, 42);
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 42);
		}
		{
			std::cout << std::endl;
			std::cout << "=== Size 10 vector ===" << std::endl;
			std::cout << std::endl;

			std::vector<int> a(10, 42);
			a[0] = 1729; a[1] = 1024;
			run_test(a, 0);
			run_test(a, 1729);
			run_test(a, 1024);
			run_test(a, 42);
			run_test(a, 'a');
		}
	}
	return 0;
}