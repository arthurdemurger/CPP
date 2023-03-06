/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:28 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 11:38:21 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat" << this->_type << " string constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	std::cout << "WrongCat" << this->_type << " copy constructor called" << std::endl;
	*this = c;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat" << this->_type << " destructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat" << this->_type << " : * Wrong Miaou miaou * " << std::endl;
}

