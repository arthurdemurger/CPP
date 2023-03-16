/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 10:25:42 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal " << this->_type << " string constructor called." << std::endl;
}

AAnimal::AAnimal(void) : _type("Animal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
	std::cout << "AAnimal " << this->_type << " copy constructor called" << std::endl;
	*this = a;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal " << this->_type << " destructor called." << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
AAnimal&	AAnimal::operator=(const AAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
