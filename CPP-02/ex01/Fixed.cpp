/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:37 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/24 16:33:50 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float fl) : _number(roundf(fl * (1 << this->_bitsNumber)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int itg) : _number(itg << this->_bitsNumber)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

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
	this->_number = f._number;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt(void) const
{
	return (this->_number >> this->_bitsNumber);
}

float	Fixed::toFloat(void) const
{
	return ((float) this->_number / (1 << this->_bitsNumber));
}

std::ostream	&operator<<(std::ostream &str, const Fixed &f)
{
	return (str << f.toFloat());
}