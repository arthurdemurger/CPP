/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:28 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/01 16:44:28 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "<Cat : '" << this->_type << "'> string constructor called." << std::endl;
}

Cat::Cat(const Cat &c)
{
	std::cout << "<Cat : '" << this->_type << "'> copy constructor called" << std::endl;
	*this = c;
}

Cat::~Cat(void)
{
	std::cout << "<Cat : '" << this->_type << "'> destructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "<Cat : '" << this->_type << "'> : Miaou miaou" << std::endl;
}

