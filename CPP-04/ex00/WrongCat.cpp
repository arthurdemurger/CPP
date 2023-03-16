/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:28 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:53:25 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat" << this->_type << " string constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	std::cout << "WrongCat" << this->_type << " copy constructor called" << std::endl;
	*this = c;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat" << this->_type << " destructor called." << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
WrongCat&	WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

/*
** ------------------------------- METHODS --------------------------------
*/
void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat" << this->_type << " : * Wrong Miaou miaou * " << std::endl;
}

