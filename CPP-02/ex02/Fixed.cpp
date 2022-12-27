/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:37 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/27 14:51:35 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float fl) : _number(roundf(fl * (1 << Fixed::_bitsNumber)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int itg) : _number(itg << Fixed::_bitsNumber)
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
	this->_number = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt(void) const
{
	return (this->_number >> Fixed::_bitsNumber);
}

float	Fixed::toFloat(void) const
{
	return ((float) this->_number / (1 << Fixed::_bitsNumber));
}

bool			Fixed::operator>(Fixed const &f)
{
	return (this->getRawBits() > f.getRawBits());
}

bool			Fixed::operator<(Fixed const &f)
{
	return (this->getRawBits() < f.getRawBits());
}

bool			Fixed::operator<=(Fixed const &f)
{
	return (this->getRawBits() <= f.getRawBits());
}

bool			Fixed::operator>=(Fixed const &f)
{
	return (this->getRawBits() >= f.getRawBits());
}

bool			Fixed::operator==(Fixed const &f)
{
	return (this->getRawBits() == f.getRawBits());
}

bool			Fixed::operator!=(Fixed const &f)
{
	return (this->getRawBits() != f.getRawBits());
}

Fixed			Fixed::operator+(Fixed const &f)
{
	Fixed	copy(*this);
	copy.setRawBits(this->getRawBits() + f.getRawBits());
	return (copy);
}

Fixed			Fixed::operator-(Fixed const &f)
{
	Fixed	copy(*this);
	copy.setRawBits(this->getRawBits() - f.getRawBits());
	return (copy);
}

Fixed			Fixed::operator*(Fixed const &f)
{
	Fixed	copy(*this);
	long	n1;
	long	n2;

	n1 = (long) this->getRawBits();
	n2 = (long) f.getRawBits();
	copy.setRawBits((n1 * n2) / (1 << Fixed::_bitsNumber));
	return (copy);
}

Fixed			Fixed::operator/(Fixed const &f)
{
	Fixed	copy(*this);
	long	n1;
	long	n2;

	n1 = (long) this->getRawBits();
	n2 = (long) f.getRawBits();
	copy.setRawBits((n1) * (1 << Fixed::_bitsNumber) / n2);
	return (copy);
}

Fixed			Fixed::operator++(void)
{
	++this->_number;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_number++;
	return (tmp);
}

Fixed			Fixed::operator--(void)
{
	--this->_number;
	return (*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_number--;
	return (tmp);
}

Fixed const	&min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const	&min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const	&max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed const	&max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

std::ostream	&operator<<(std::ostream &str, const Fixed &f)
{
	return (str << f.toFloat());
}
