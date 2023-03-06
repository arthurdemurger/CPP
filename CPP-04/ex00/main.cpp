/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:18 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 11:36:45 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "******* ANIMAL *******" << std::endl;

	const Animal* meta = new Animal();
	const Animal* scooby = new Dog();
	const Animal* garfield = new Cat();

	std::cout << scooby->getType() << " " << std::endl;
	std::cout << garfield->getType() << " " << std::endl;
	scooby->makeSound(); //will output the cat sound!
	garfield->makeSound();
	meta->makeSound();

	delete meta;
	delete garfield;
	delete scooby;

	std::cout <<std::endl << "******* WRONG ANIMAL *******" << std::endl;

	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
	std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
	wrong->makeSound();
	wrongCat->makeSound();

	delete  wrong;
	delete  wrongCat;

	return (0);
};