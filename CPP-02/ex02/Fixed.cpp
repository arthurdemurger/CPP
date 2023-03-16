/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:37 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:46:05 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Fixed::Fixed(const float nb) : _number(roundf(nb * (1 << Fixed::_bitsNumber)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _number(nb << Fixed::_bitsNumber)
{
	// std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(void) : _number(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits(const int _raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_number = _raw;
}

/*
** ------------------------------- METHODS --------------------------------
*/
float	Fixed::toFloat(void) const
{
	return ((float) this->_number / (1 << Fixed::_bitsNumber));
}

int		Fixed::toInt(void) const
{
	return (this->_number >> Fixed::_bitsNumber);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
bool	Fixed::operator>(const Fixed &f)
{
	return (this->getRawBits() > f.getRawBits());
}

bool	Fixed::operator<(const Fixed &f)
{
	return (this->getRawBits() < f.getRawBits());
}

bool	Fixed::operator<=(const Fixed &f)
{
	return (this->getRawBits() <= f.getRawBits());
}

bool	Fixed::operator>=(const Fixed &f)
{
	return (this->getRawBits() >= f.getRawBits());
}

bool	Fixed::operator==(const Fixed &f)
{
	return (this->getRawBits() == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed &f)
{
	return (this->getRawBits() != f.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed	Fixed::operator++(void)
{
	++this->_number;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	++this->_number;
	return (tmp);
}

Fixed Fixed::operator--(void)
{
	--this->_number;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	--this->_number;
	return (tmp);
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_number = f.getRawBits();
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Fixed const &nb)
{
	o << nb.toFloat();
	return o;
}
