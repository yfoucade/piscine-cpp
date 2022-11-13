/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:52:32 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/13 20:58:43 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Cat *cat1 = new Cat;
	Cat *cat2 = new Cat;


	std::cout << "=== Cat 1 ===" << std::endl;
	cat1->printIdeas();
	cat1->addIdea("Wake up");
	cat1->addIdea("Play");
	cat1->addIdea("Eat fish");
	std::cout << "=== Cat 1 ===" << std::endl;
	cat1->printIdeas();
	std::cout << std::endl;
	std::cout << "===========================" << std::endl;
	std::cout << "=== Assignment operator ===" << std::endl;
	std::cout << "===========================" << std::endl;
	*cat2 = *cat1;
	std::cout << "=== Cat 2 ===" << std::endl;
	cat2->printIdeas();
	std::cout << std::endl;
	std::cout << "replace last idea" << std::endl << std::endl;
	cat2->popIdea();
	cat2->addIdea("Eat cat food");
	std::cout << "=== Cat 2 ===" << std::endl;
	cat2->printIdeas();
	std::cout << "=== Cat 1 ===" << std::endl;
	cat1->printIdeas();
	delete cat1;
	std::cout << "=== Cat 2 ===" << std::endl;
	cat2->printIdeas();

	std::cout << std::endl;
	std::cout << "===========================" << std::endl;
	std::cout << "===   Copy constructor  ===" << std::endl;
	std::cout << "===========================" << std::endl;
	Cat cat3(*cat2);
	std::cout << "=== Cat 3 ===" << std::endl;
	cat3.printIdeas();
	std::cout << std::endl;
	std::cout << "Delete cat2" << std::endl;
	std::cout << "=== Cat 3 ===" << std::endl;
	cat3.printIdeas();
	delete cat2;
	return 0;
}
