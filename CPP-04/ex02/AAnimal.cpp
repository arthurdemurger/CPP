/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:46:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 12:14:14 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal " << this->_type << " string constructor called." << std::endl;
}

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
	std::cout << "AAnimal " << this->_type << " copy constructor called" << std::endl;
	*this = a;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal " << this->_type << " destructor called." << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}
