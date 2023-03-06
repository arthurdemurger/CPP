/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:18 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 12:16:08 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl << "****** Constructors ******" << std::endl;
	AAnimal	*animalArray[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();
	}

	std::cout << std::endl << "****** Destructors ******" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animalArray[i];
	return (0);
};