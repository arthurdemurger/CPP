/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:32 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 12:14:52 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

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

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog " << this->_type << " destructor called." << std::endl;
}

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

void	Dog::makeSound(void) const
{
	std::cout << "Dog " << this->_type << " : * Waf waf *" << std::endl;
}

