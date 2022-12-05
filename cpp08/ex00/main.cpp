/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:26:58 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/05 14:59:19 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
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

template <typename T>
void	run_test( const T& container, const int val )
{
	typename T::const_iterator ret;
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
			std::cout << "=== Empty vector ===" << std::endl;
			std::cout << std::endl;
			
			const std::vector<int> a;
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 1024);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 1 vector ===" << std::endl;
			std::cout << std::endl;

			const std::vector<int> a(1, 42);
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 42);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 10 vector ===" << std::endl;
			std::cout << std::endl;

			std::vector<int> a(10, 42);
			a[0] = 1729; a[1] = 1024;
			run_test(a, 0);
			run_test(a, 1729);
			run_test(a, 1024);
			run_test(a, 42);
			run_test(a, 'a');
			std::cout << std::endl;
		}
	}
	{
		std::cout << "=============" << std::endl;
		std::cout << "=== DEQUE ===" << std::endl;
		std::cout << "=============" << std::endl;

		{
			std::cout << "=== Empty deque ===" << std::endl;
			std::cout << std::endl;
			
			std::deque<int> a;
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 1024);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 1 deque ===" << std::endl;
			std::cout << std::endl;

			std::deque<int> a(1, 42);
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 42);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 10 deque ===" << std::endl;
			std::cout << std::endl;

			std::deque<int> a(10, 42);
			a[0] = 1729; a[1] = 1024;
			run_test(a, 0);
			run_test(a, 1729);
			run_test(a, 1024);
			run_test(a, 42);
			run_test(a, 'a');
			std::cout << std::endl;
		}
	}
	{
		std::cout << "============" << std::endl;
		std::cout << "=== LIST ===" << std::endl;
		std::cout << "============" << std::endl;

		{
			std::cout << "=== Empty list ===" << std::endl;
			std::cout << std::endl;
			
			std::list<int> a;
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 1024);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 1 list ===" << std::endl;
			std::cout << std::endl;

			std::list<int> a(1, 42);
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 42);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 10 list ===" << std::endl;
			std::cout << std::endl;

			std::list<int> a(10, 42);
			a.push_back(1729); a.push_back(1024);
			run_test(a, 0);
			run_test(a, 1729);
			run_test(a, 1024);
			run_test(a, 42);
			run_test(a, 'a');
			std::cout << std::endl;
		}
	}
	{
		std::cout << "===========" << std::endl;
		std::cout << "=== SET ===" << std::endl;
		std::cout << "===========" << std::endl;

		int myints[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		{
			std::cout << "=== Empty set ===" << std::endl;
			std::cout << std::endl;
			
			std::set<int> a;
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 1024);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 1 set ===" << std::endl;
			std::cout << std::endl;

			std::set<int> a(myints, myints + 10);
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 42);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 10 set ===" << std::endl;
			std::cout << std::endl;

			std::set<int> a(myints, myints + 10);
			a.insert(a.end(), 1729); a.insert(a.end(), 1024);
			run_test(a, 0);
			run_test(a, 1729);
			run_test(a, 1024);
			run_test(a, 42);
			run_test(a, 'a');
			std::cout << std::endl;
		}
	}
	{
		std::cout << "===========" << std::endl;
		std::cout << "=== SET ===" << std::endl;
		std::cout << "===========" << std::endl;

		int myints[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		{
			std::cout << "=== Empty set ===" << std::endl;
			std::cout << std::endl;
			
			std::set<int> a;
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 1024);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 1 set ===" << std::endl;
			std::cout << std::endl;

			std::set<int> a(myints, myints + 10);
			run_test(a, -1);
			run_test(a, 0);
			run_test(a, 42);
			std::cout << std::endl;
		}
		{
			std::cout << "=== Size 10 set ===" << std::endl;
			std::cout << std::endl;

			std::set<int> a(myints, myints + 10);
			a.insert(a.end(), 1729); a.insert(a.end(), 1024);
			run_test(a, 0);
			run_test(a, 1729);
			run_test(a, 1024);
			run_test(a, 42);
			run_test(a, 'a');
			std::cout << std::endl;
		}
	}
	return 0;
}