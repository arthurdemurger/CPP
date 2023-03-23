/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:11:59 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/23 16:40:47 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Span::Span(unsigned int N) : _size(N), _nbOfInts(0)
{
	_span.reserve(_size);
}

Span::Span(const Span &copy) : _size(copy._size), _nbOfInts(0)
{
	_span.reserve(copy._size);
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Span::~Span(void) { }

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Span	&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->_size = copy._size;
		this->_span = copy._span;
		this->_nbOfInts = copy._nbOfInts;
	}
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Span const &rhs)
{
	std::cout << "Span contents: ";
	for (unsigned int i = 0; i < rhs.getNbOfInts(); i++)
		std::cout << (rhs.getVec())[i] << " ";
	std::cout << std::endl;
	return (o);
}

/*
** ------------------------------- ACCESSORS --------------------------------
*/
std::vector<int>	Span::getVec(void) const { return (_span); }

unsigned int	Span::getSize(void) const { return (_size); }

unsigned int	Span::getNbOfInts(void) const { return (_nbOfInts); }

/*
** ------------------------------- METHODS --------------------------------
*/

void	Span::addNumber(int nb)
{
	if (_nbOfInts == _size)
		throw std::exception();
	_span[_nbOfInts] = nb;
	_nbOfInts++;
}

unsigned int	Span::shortestSpan(void)
{
	return (0);
}

unsigned int	Span::longestSpan(void)
{
	int	max, min;

	max = INT_MIN;
	min = INT_MAX;
	if (_size <= 1)
		throw std::exception();
	for (unsigned int i = 0; i < _size; i++)
	{
		if (_span[i] < min)
			min = _span[i];
		if (_span[i] > max)
			max = _span[i];
	}
	return (max - min);
}
