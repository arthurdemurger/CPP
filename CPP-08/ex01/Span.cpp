/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:11:59 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 13:05:19 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Span::Span(unsigned int N) : _size(N), _nbOfInts(0)
{
	_vector.reserve(_size);
}

Span::Span(const Span &copy) : _size(copy._size), _nbOfInts(0)
{
	_vector.reserve(copy._size);
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
		this->_vector = copy._vector;
		this->_nbOfInts = copy._nbOfInts;
	}
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Span const &rhs)
{
	std::cout << "Span contents: ";
	for (unsigned int i = 0; i < rhs.getNbOfInts(); i++)
		std::cout << (rhs.getVector())[i] << " ";
	std::cout << std::endl;
	return (o);
}

/*
** ------------------------------- ACCESSORS --------------------------------
*/
std::vector<int>	Span::getVector(void) const { return (_vector); }

unsigned int	Span::getSize(void) const { return (_size); }

unsigned int	Span::getNbOfInts(void) const { return (_nbOfInts); }

/*
** ------------------------------- METHODS --------------------------------
*/

void	Span::addNumber(int nb)
{
	if (_nbOfInts == _size)
		throw std::exception();
	_vector.push_back(nb);
	_nbOfInts++;
}

void	Span::addNumber(int nb, int start, int end)
{
	if (_nbOfInts == _size || nb + _nbOfInts > _size)
		throw std::exception();
	std::srand(time(0));

	for (int i = 0; i < nb; i++)
	{
		int random = start + (rand() % end);
		_vector.push_back(random);
		_nbOfInts++;
	}
}

unsigned int	Span::shortestSpan(void)
{
	int	min;

	if (_size <= 1)
		throw std::out_of_range("Minimum two elements in the span.");
	std::vector<int>	tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	min = std::numeric_limits<int>::max();
	for (unsigned int i = 1; i < _nbOfInts; i++)
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	return (min);
}

unsigned int	Span::longestSpan(void)
{
	if (_size <= 1)
		throw std::out_of_range("Minimum two elements in the span.");
	int	max = *std::max_element(_vector.begin(), _vector.end());
	int	min = *std::min_element(_vector.begin(), _vector.end());

	return (max - min);
}
