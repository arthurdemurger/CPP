/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:37 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:44:23 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Fixed::Fixed(void) : _number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
** ------------------------------- ACCESSORS --------------------------------
*/
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits(const int _raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = _raw;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_number = f.getRawBits();
	return (*this);
}
