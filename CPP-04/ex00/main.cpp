/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:18 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/01 16:50:28 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
int main(void)
{
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
	return (0);
};