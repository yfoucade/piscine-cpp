/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:08 by yfoucade          #+#    #+#             */
/*   Updated: 2022/12/05 15:21:45 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int using_list()
{
	std::cout << "Using std::list<int>\n";
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}

int main()
{
	std::cout << "Creating Mutant Stack\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "\n\n";
	using_list();
	std::cout << "\n\n";

	{
		std::cout << "Reverse iterator\n";
		MutantStack<int> s(mstack);
		MutantStack<int>::reverse_iterator it = s.rbegin();
		MutantStack<int>::reverse_iterator ite = s.rend();
		++it;
		--it;
		while (it != ite)
		{
			(*it)++;
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "\n\n";

	{
		std::cout << "Const reverse iterator\n";
		MutantStack<int> s(mstack);
		MutantStack<int>::const_reverse_iterator it = s.rbegin();
		MutantStack<int>::const_reverse_iterator ite = s.rend();
		++it;
		--it;
		while (it != ite)
		{
			// try{
			// (*it)++;
			// }
			// catch(std::exception& e){
			// 	std::cout << e.what() << std::endl;
			// }
			std::cout << *it << std::endl;
			++it;
		}
	}
	
	return 0;
}
