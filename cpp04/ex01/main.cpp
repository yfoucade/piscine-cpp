/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:52:32 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/14 10:47:49 by yfoucade         ###   ########.fr       */
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

	std::cout << std::endl;
	std::cout << "=== Cat 1 ===" << std::endl;
	cat1->printIdeas();
	cat1->addIdea(1, "Wake up");
	cat1->addIdea(2, "Play");
	cat1->addIdea(42, "Eat fish");
	std::cout << std::endl;
	std::cout << "=== Cat 1 ===" << std::endl;
	cat1->printIdeas();
	std::cout << std::endl;

	std::cout << "===========================" << std::endl;
	std::cout << "=== Assignment operator ===" << std::endl;
	std::cout << "===========================" << std::endl;
	*cat2 = *cat1;
	std::cout << std::endl;
	std::cout << "=== Cat 2 ===" << std::endl;
	cat2->printIdeas();
	std::cout << std::endl;
	std::cout << "replace last idea" << std::endl << std::endl;
	cat2->addIdea(42, "Eat cat food");
	std::cout << "=== Cat 2 ===" << std::endl;
	cat2->printIdeas();
	std::cout << std::endl;
	std::cout << "=== Cat 1 ===" << std::endl;
	cat1->printIdeas();
	std::cout << std::endl;
	delete cat1;
	std::cout << std::endl;
	std::cout << "=== Cat 2 ===" << std::endl;
	cat2->printIdeas();
	std::cout << std::endl;

	std::cout << "===========================" << std::endl;
	std::cout << "===   Copy constructor  ===" << std::endl;
	std::cout << "===========================" << std::endl;
	Cat cat3(*cat2);
	std::cout << std::endl;
	std::cout << "=== Cat 3 ===" << std::endl;
	cat3.printIdeas();
	std::cout << std::endl;
	std::cout << "Delete cat2" << std::endl;
	std::cout << "=== Cat 3 ===" << std::endl;
	cat3.printIdeas();
	std::cout << std::endl;
	delete cat2;
	std::cout << std::endl;

	std::cout << "===========================" << std::endl;
	std::cout << "===  Array of Animals   ===" << std::endl;
	std::cout << "===========================" << std::endl;
	Animal	*tab[4];
	for (int i = 0; i < 4; i++)
	{
		if ( i % 2 )
			tab[i] = new Cat;
		else
			tab[i] = new Dog;
	}
	for (int i = 0; i < 4; i++)
		delete tab[i];

	std::cout << std::endl;
	
	return 0;
}
