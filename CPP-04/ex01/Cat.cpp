/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:28 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:54:27 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat " << this->_type << " string constructor called." << std::endl;
}

Cat::Cat(const Cat &c)
{
	std::cout << "Cat " << this->_type << " copy constructor called" << std::endl;
	*this = c;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat " << this->_type << " destructor called." << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Cat&	Cat::operator=(const Cat &rhs)
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
void	Cat::makeSound(void) const
{
	std::cout << "Cat " << this->_type << " : * Miaou miaou *" << std::endl;
}

