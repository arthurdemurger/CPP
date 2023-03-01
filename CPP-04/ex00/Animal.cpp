/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/01 16:49:15 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "<Animal : '" << this->_type << "'> string constructor called." << std::endl;
}

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "<Animal : '" << this->_type << "'> copy constructor called" << std::endl;
	*this = a;
}

Animal::~Animal(void)
{
	std::cout << "<Animal : '" << this->_type << "'> destructor called." << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "<Animal : '" << this->_type << "'> : .........." << std::endl;
}

Animal&	Animal::operator=(const Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return this->_type;
}
