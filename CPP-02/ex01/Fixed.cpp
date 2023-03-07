/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:37 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 14:37:20 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/****************** Constructors & Destructor ******************/
Fixed::Fixed(const float nb) : _number(roundf(nb * (1 << Fixed::_bitsNumber)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _number(nb << Fixed::_bitsNumber)
{
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(void) : _number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
/**************************************************/



/****************** Member functions ******************/
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

float	Fixed::toFloat(void) const
{
	return ((float) this->_number / (1 << Fixed::_bitsNumber));
}

int		Fixed::toInt(void) const
{
	return (this->_number >> Fixed::_bitsNumber);
}
/******************************************************/



/****************** Operator overloading ******************/
Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_number = f.getRawBits();
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Fixed const &nb)
{
	o << nb.toFloat();
	return o;
}
/**********************************************************/

