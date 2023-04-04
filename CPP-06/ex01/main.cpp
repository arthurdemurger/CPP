/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:25:54 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 11:16:54 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		data1(42);
	uintptr_t	intptr = serialize(&data1);

	Data		*data2 = deserialize(intptr);

	std::cout << "Addresses :" << std::endl;
	std::cout << "****************************" << std::endl;
	std::cout << "Data1 address: "<< &data1 << std::endl;
	std::cout << "Data2 address: "<< data2 << std::endl;

	std::cout << std::endl;

	std::cout << "Values of the data :" << std::endl;
	std::cout << "****************************" << std::endl;
	std::cout << "Data1 value: " << data1.getData() << std::endl;
	std::cout << "Data2 value: " << (*data2).getData() << std::endl;
	return (0);
}
