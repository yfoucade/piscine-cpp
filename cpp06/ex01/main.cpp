/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfoucade <yfoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:26:52 by yfoucade          #+#    #+#             */
/*   Updated: 2022/11/28 15:47:37 by yfoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>
#include "Data.hpp"

uintptr_t serialize( Data* ptr )
{
	return reinterpret_cast<uintptr_t> (ptr);
}

Data	*deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data*> (raw);
}

int	main( void )
{
	Data data;
	uintptr_t raw;
	Data *dataptr;

	std::cout << "Address of data: \t\t" << &data << std::endl;
	raw = serialize(&data);
	std::cout << "Value of raw: \t\t\t0x" << std::hex << raw << std::endl;
	dataptr = deserialize(raw);
	std::cout << "Address pointed by dataptr: \t" << dataptr << std::endl;
}