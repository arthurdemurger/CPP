/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:53:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal " << this->_type << " string constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout << "WrongAnimal " << this->_type << " copy constructor called" << std::endl;
	*this = a;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal " << this->_type << " destructor called." << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << this->_type << " : * WrongAnimal sound *" << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}
