/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:18 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 10:16:55 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << "********************" << std::endl;
	Animal	*animalArray[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();
	}

	std::cout << std::endl << "********************" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animalArray[i];
};