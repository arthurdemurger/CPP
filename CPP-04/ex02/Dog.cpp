/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:32 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:57:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Dog::Dog(void) : AAnimal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog " << this->_type << " string constructor called." << std::endl;
}

Dog::Dog(const Dog &c)
{
	std::cout << "Dog " << this->_type << " copy constructor called" << std::endl;
	*this = c;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog " << this->_type << " destructor called." << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Dog&	Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		delete this->_brain;
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

/*
** ------------------------------- METHOD --------------------------------
*/
void	Dog::makeSound(void) const
{
	std::cout << "Dog " << this->_type << " : * Waf waf *" << std::endl;
}

