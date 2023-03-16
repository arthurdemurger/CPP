/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 10:22:08 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal " << this->_type << " string constructor called." << std::endl;
}

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal " << this->_type << " copy constructor called" << std::endl;
	this->_type = a._type;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Animal::~Animal(void)
{
	std::cout << "Animal " << this->_type << " destructor called." << std::endl;
}

/*
** ------------------------------- METHODS --------------------------------
*/
void	Animal::makeSound(void) const
{
	std::cout << "Animal " << this->_type << " : * Animal sound * " << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Animal&	Animal::operator=(const Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::string	Animal::getType(void) const
{
	return this->_type;
}
