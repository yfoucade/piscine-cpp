/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:52:32 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/11 00:40:40 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "====================" << std::endl;
	std::cout << "===    Animal    ===" << std::endl;
	std::cout << "====================" << std::endl;
	const Animal *meta = new Animal();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "====================" << std::endl;
	std::cout << "===     Cat      ===" << std::endl;
	std::cout << "====================" << std::endl;
	const Animal *i = new Cat();
	// const Animal* k = new Cat("Kitty"); // No string constructor for Cat
	i->makeSound();
	std::cout << std::endl;

	std::cout << "====================" << std::endl;
	std::cout << "===     Dog      ===" << std::endl;
	std::cout << "====================" << std::endl;
	const Animal *j = new Dog();
	// const Animal* l = new Dog("Puppy"); // No string constructor for Dog
	j->makeSound();
	std::cout << std::endl;

	std::cout << "====================" << std::endl;
	std::cout << "=== Constructors ===" << std::endl;
	std::cout << "====================" << std::endl;
	Animal m(*i);
	m.makeSound();
	std::cout << std::endl;
	m = *j;
	m.makeSound();
	std::cout << std::endl;

	std::cout << "====================" << std::endl;
	std::cout << "=== Wrong Animal ===" << std::endl;
	std::cout << "====================" << std::endl;
	const WrongAnimal *meta2 = new WrongAnimal();
	meta2->makeSound();
	std::cout << std::endl;

	std::cout << "====================" << std::endl;
	std::cout << "===  Wrong  Cat  ===" << std::endl;
	std::cout << "====================" << std::endl;
	const WrongAnimal *i2 = new WrongCat();
	i2->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	return 0;
}
